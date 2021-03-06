/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library

@class NSCondition;

@interface AVCallbackHandler : NSObject {
	id _target;	// 4 = 0x4
	SEL _action;	// 8 = 0x8
	SEL _mainThreadAction;	// 12 = 0xc
	NSCondition *_condition;	// 16 = 0x10
	id _params;	// 20 = 0x14
}
@property(assign) SEL action;	// G=0x3299a685; S=0x3299a699; @synthesize=_action
@property(assign) SEL mainThreadAction;	// G=0x3299a6b1; S=0x3299a6c5; @synthesize=_mainThreadAction
@property(assign) id target;	// G=0x3299a659; S=0x3299a66d; @synthesize=_target
- (id)init;	// 0x3299a385
// declared property getter: - (SEL)action;	// 0x3299a685
- (void)dealloc;	// 0x3299a3e9
- (BOOL)hasParams;	// 0x3299a641
// declared property getter: - (SEL)mainThreadAction;	// 0x3299a6b1
// declared property setter: - (void)setAction:(SEL)action;	// 0x3299a699
- (void)setCallbackParams:(id)params;	// 0x3299a471
// declared property setter: - (void)setMainThreadAction:(SEL)action;	// 0x3299a6c5
// declared property setter: - (void)setTarget:(id)target;	// 0x3299a66d
// declared property getter: - (id)target;	// 0x3299a659
- (id)waitForCallbackParams;	// 0x3299a5a9
@end

