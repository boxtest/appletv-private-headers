/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboard.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardAutomatic : UIKeyboard {
@private
	BOOL showsCandidateBar;	// 64 = 0x40
	BOOL showsCandidateInline;	// 65 = 0x41
}
@property(assign, nonatomic) BOOL showsCandidateBar;	// G=0x331dd2e5; S=0x331dd2f5; @synthesize
@property(assign, nonatomic) BOOL showsCandidateInline;	// G=0x331dd305; S=0x331dd315; @synthesize
- (id)initWithFrame:(CGRect)frame;	// 0x32fa4d51
- (BOOL)_isAutomaticKeyboard;	// 0x33039231
- (void)activate;	// 0x32fb2899
- (void)dealloc;	// 0x331dc93d
- (void)didSuspend:(id)suspend;	// 0x331dd241
- (UIPeripheralAnimationGeometry)geometryForHeightDelta:(float)heightDelta;	// 0x331dca01
- (void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;	// 0x331dcd31
- (BOOL)isActive;	// 0x32fb1f65
- (void)maximize;	// 0x331dc9cd
- (void)minimize;	// 0x331dc999
- (void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;	// 0x331dcc61
// declared property setter: - (void)setShowsCandidateBar:(BOOL)bar;	// 0x331dd2f5
// declared property setter: - (void)setShowsCandidateInline:(BOOL)anInline;	// 0x331dd315
// declared property getter: - (BOOL)showsCandidateBar;	// 0x331dd2e5
// declared property getter: - (BOOL)showsCandidateInline;	// 0x331dd305
- (void)willResume:(id)resume;	// 0x331dcf19
@end

