// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#import "LGEstimatedSize.h"
#import <Foundation/Foundation.h>
@class LGAmount;
@class LGBitcoinLikeBlock;
@class LGBitcoinLikeInput;
@class LGBitcoinLikeOutput;


/**Class representing a Bitcoin transaction */
@interface LGBitcoinLikeTransaction : NSObject

/** Get the hash of the transaction. */
- (nonnull NSString *)getHash;

/** Get the input of the transaction */
- (nonnull NSArray<LGBitcoinLikeInput *> *)getInputs;

/** Get the output of the transaction */
- (nonnull NSArray<LGBitcoinLikeOutput *> *)getOutputs;

/** Get the block in which the transaction is inserted if the transaction is confirmed. */
- (nullable LGBitcoinLikeBlock *)getBlock;

/** Get the lock time of the transaction. */
- (int64_t)getLockTime;

/** Get the amount of fees of the transaction. */
- (nullable LGAmount *)getFees;

/**
 * Get the time when the transaction was issued or the time of the block including
 * this transaction
 */
- (nonnull NSDate *)getTime;

/** Get the timestamps serialized in the raw transaction if the underlying currency handles it. */
- (nullable NSNumber *)getTimestamp;

/** Serialize the transaction to its raw format. */
- (nonnull NSData *)serialize;

/** Get the witness if the underlying transaction is a segwit transaction. */
- (nullable NSData *)getWitness;

/**
 * Estimate the size of the raw transaction in bytes. This method returns a minimum estimated size and a maximum estimated
 * size.
 */
- (nonnull LGEstimatedSize *)getEstimatedSize;

@end
