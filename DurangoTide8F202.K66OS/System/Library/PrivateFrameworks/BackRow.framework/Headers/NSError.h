/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSError.h> // Unknown library


@interface NSError (BRError)
+ (id)errorWithBRError:(int)brerror;	// 0x328ba489
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion;	// 0x328ba5fd
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion userInfo:(id)info;	// 0x329589d1
- (void)postBRErrorNotificationFromObject:(id)object;	// 0x328bacc9
@end
