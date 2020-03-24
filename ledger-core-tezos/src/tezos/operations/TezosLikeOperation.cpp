/*
 *
 * TezosLikeOperation
 *
 * Created by El Khalil Bellakrid on 27/04/2019.
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2019 Ledger
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */


#include <tezos/transactions/TezosLikeTransaction.hpp>
#include <tezos/operations/TezosLikeOperation.hpp>

#include <core/operation/OperationDatabaseHelper.hpp>

namespace ledger {
    namespace core {
        TezosLikeOperation::TezosLikeOperation(
            std::shared_ptr<AbstractAccount> const& account
        ): Operation(account) {
        }

        TezosLikeOperation::TezosLikeOperation(
            std::shared_ptr<AbstractAccount> const& account,
            TezosLikeBlockchainExplorerTransaction const& tx
        ) : Operation(account) {
            setExplorerTransaction(tx);
        }

        std::shared_ptr<api::TezosLikeTransaction> TezosLikeOperation::getTransaction() const {
            return _tx;
        }

        const TezosLikeBlockchainExplorerTransaction& TezosLikeOperation::getExplorerTransaction() const
        {
            return _explorerTx;
        }

        TezosLikeBlockchainExplorerTransaction& TezosLikeOperation::getExplorerTransaction()
        {
            return _explorerTx;
        }

        void TezosLikeOperation::setExplorerTransaction(TezosLikeBlockchainExplorerTransaction const& tx)
        {
            _explorerTx = tx;

            // recreate the transaction based on the change of the explorer transaction
            _tx = std::make_shared<TezosLikeTransaction>(tx, getCurrency(), "");
        }

        void TezosLikeOperation::refreshUid(const std::string &additional) {

            auto final = fmt::format("{}+{}", _tx->getHash(), api::to_string(_tx->getType()));
            if (!additional.empty()){
                final = fmt::format("{}+{}", final, additional);
            }
            uid = OperationDatabaseHelper::createUid(accountUid, final, getOperationType());
        }

        bool TezosLikeOperation::isComplete() {
            return true;
        }

        std::shared_ptr<api::TezosLikeOperation> fromCoreOperation(const std::shared_ptr<api::Operation> & coreOperation) {
          return std::dynamic_pointer_cast<api::TezosLikeOperation>(coreOperation);
        }
    }
}
