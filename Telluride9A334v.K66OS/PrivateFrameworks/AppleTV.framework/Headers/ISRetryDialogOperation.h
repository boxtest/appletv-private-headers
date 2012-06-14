/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISDialogOperation.h"


__attribute__((visibility("hidden")))
@interface ISRetryDialogOperation : ISDialogOperation {
@private
	BOOL _shouldRetry;	// 84 = 0x54
}
@property(assign) BOOL shouldRetry;	// G=0x33353a21; S=0x33353a31; @synthesize=_shouldRetry
+ (id)operationWithTitle:(id)title message:(id)message;	// 0x333537d1
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x333539e5
// declared property setter: - (void)setShouldRetry:(BOOL)retry;	// 0x33353a31
// declared property getter: - (BOOL)shouldRetry;	// 0x33353a21
@end
