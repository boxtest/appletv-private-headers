/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, MRAction;

@interface MRAnimationTrigger : NSObject {
	MRAction *_action;	// 4 = 0x4
	float _startValue;	// 8 = 0x8
	float _lastValue;	// 12 = 0xc
	NSDictionary *_animationAttributes;	// 16 = 0x10
}
@property(retain, nonatomic) MRAction *action;	// G=0x335b97d1; S=0x335b9691; @synthesize=_action
@property(readonly, assign) NSDictionary *animationAttributes;	// G=0x335b9821; @synthesize=_animationAttributes
@property(readonly, assign) BOOL isArmed;	// G=0x335b9735; 
@property(assign) float lastValue;	// G=0x335b9801; S=0x335b9811; @synthesize=_lastValue
@property(assign) float startValue;	// G=0x335b97e1; S=0x335b97f1; @synthesize=_startValue
- (id)initWithAction:(id)action;	// 0x335b95a1
// declared property getter: - (id)action;	// 0x335b97d1
// declared property getter: - (id)animationAttributes;	// 0x335b9821
- (void)dealloc;	// 0x335b9619
- (void)disarm;	// 0x335b9761
// declared property getter: - (BOOL)isArmed;	// 0x335b9735
// declared property getter: - (float)lastValue;	// 0x335b9801
- (float)rearmIfNeededWithDefaultValue:(float)defaultValue;	// 0x335b9779
// declared property setter: - (void)setAction:(id)action;	// 0x335b9691
// declared property setter: - (void)setLastValue:(float)value;	// 0x335b9811
// declared property setter: - (void)setStartValue:(float)value;	// 0x335b97f1
// declared property getter: - (float)startValue;	// 0x335b97e1
@end

