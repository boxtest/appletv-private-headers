/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSError.h> // Unknown library


@interface NSError (MSErrorUtilities)
+ (id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description;	// 0x30e58061
+ (id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description suggestion:(id)suggestion;	// 0x30e58085
+ (id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description underlyingError:(id)error;	// 0x30e58109
- (BOOL)MSCanBeIgnored;	// 0x30e58849
- (BOOL)MSContainsErrorWithDomain:(id)domain code:(int)code;	// 0x30e59129
- (id)MSFindPrimaryError;	// 0x30e58479
- (BOOL)MSIsAuthError;	// 0x30e58da5
- (BOOL)MSIsBadTokenError;	// 0x30e58f6d
- (BOOL)MSIsCounted;	// 0x30e58a49
- (BOOL)MSIsFatal;	// 0x30e58c0d
- (BOOL)MSIsQuotaError;	// 0x30e592c9
- (BOOL)MSIsTemporaryNetworkError;	// 0x30e585d1
- (id)MSMMCSRetryAfterDate;	// 0x30e5940d
- (id)MSMakePrimaryError;	// 0x30e583a1
- (BOOL)MSNeedsBackoff;	// 0x30e58871
- (id)MSVerboseDescription;	// 0x30e5838d
- (void)_MSApplyBlock:(id)block;	// 0x30e58561
- (id)_MSVerboseDescriptionRecursionCount:(int)count;	// 0x30e581d1
@end
