/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"


@interface ATVBSRManager : BRSingleton {
@private
	BOOL _performingBSR;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x328980b5
+ (id)singleton;	// 0x328980a5
- (id)init;	// 0x328980c5
- (void)_performResetFromIR;	// 0x32898215
- (void)_showBSRScreenWithController:(id)controller;	// 0x32898319
- (void)dealloc;	// 0x32898141
- (void)enterBSRModeWithCompletionBlock:(id)completionBlock;	// 0x3289819d
- (void)enterWithModes:(id)modes withCompletionBlock:(id)completionBlock;	// 0x328981d9
@end

