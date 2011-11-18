/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSError.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NetflixError : NSError {
}
+ (id)errorWithDomain:(id)domain code:(int)code extraUserInfo:(id)info localizedDescription:(id)description underlyingError:(id)error;	// 0x3608d03c
+ (id)errorWithDomain:(id)domain code:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x3608dc48
+ (id)errorWithDomain:(id)domain code:(int)code underlyingError:(id)error;	// 0x3608dc8c
+ (id)localizedDescriptionForNetflixError:(int)netflixError;	// 0x3608d1f8
+ (id)localizedMessageForNRDPErrorCode:(int)nrdperrorCode;	// 0x3608d194
+ (id)localizedMessageForNetflixInternalErrorCode:(int)netflixInternalErrorCode;	// 0x3608cf88
+ (id)netflixErrorWithCode:(int)code extraUserInfo:(id)info localizedDescription:(id)description underlyingError:(id)error;	// 0x3608dabc
+ (id)netflixErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x3608da40
+ (id)netflixErrorWithCode:(int)code underlyingError:(id)error;	// 0x3608da7c
+ (id)netflixInternalErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x3608d970
+ (id)netflixInternalErrorWithCode:(int)code underlyingError:(id)error;	// 0x3608da08
+ (id)nrdpErrorWithCode:(int)code extraUserInfo:(id)info underlyingError:(id)error;	// 0x3608d8a0
+ (id)nrdpErrorWithCode:(int)code underlyingError:(id)error;	// 0x3608d938
- (id)initWithDomain:(id)domain code:(int)code localizedDescription:(id)description extraUserInfo:(id)info underlyingError:(id)error;	// 0x3608dccc
@end

