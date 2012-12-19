/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class CADisplayLink, NSMutableSet;

@interface AXDisplayLinkManager : NSObject {
	CADisplayLink *_displayLink;	// 4 = 0x4
	NSMutableSet *_activeTargetActions;	// 8 = 0x8
	NSMutableSet *_addedTargetActions;	// 12 = 0xc
	NSMutableSet *_removedTargetActions;	// 16 = 0x10
	BOOL _handlingDisplayRefresh;	// 20 = 0x14
	BOOL _shouldInvalidate;	// 21 = 0x15
	BOOL _shouldInvalidateAutomatically;	// 22 = 0x16
}
@property(retain, nonatomic, setter=_setActiveTargetActions:) NSMutableSet *_activeTargetActions;	// G=0x333849a5; S=0x333849b5; @synthesize
@property(retain, nonatomic, setter=_setAddedTargetActions:) NSMutableSet *_addedTargetActions;	// G=0x333849c5; S=0x333849d5; @synthesize
@property(retain, nonatomic, setter=_setDisplayLink:) CADisplayLink *_displayLink;	// G=0x3338424d; S=0x33384309; 
@property(assign, nonatomic, getter=_isHandlingDisplayRefresh, setter=_setHandlingDisplayRefresh:) BOOL _handlingDisplayRefresh;	// G=0x33384a05; S=0x33384a15; @synthesize
@property(retain, nonatomic, setter=_setRemovedTargetActions:) NSMutableSet *_removedTargetActions;	// G=0x333849e5; S=0x333849f5; @synthesize
@property(assign, nonatomic, setter=_setShouldInvalidate:) BOOL _shouldInvalidate;	// G=0x33384a25; S=0x33384a35; @synthesize
@property(readonly, assign, nonatomic) double duration;	// G=0x333841ed; 
@property(readonly, assign, nonatomic) int frameInterval;	// G=0x3338422d; 
@property(readonly, assign, nonatomic, getter=isPaused) BOOL paused;	// G=0x333841c9; 
@property(assign, nonatomic) BOOL shouldInvalidateAutomatically;	// G=0x33384a45; S=0x33384625; @synthesize=_shouldInvalidateAutomatically
@property(readonly, assign, nonatomic) double timestamp;	// G=0x3338420d; 
+ (id)currentDisplayLinkManager;	// 0x33383f3d
+ (void)releaseCurrentDisplayLinkManager;	// 0x33383fed
- (id)init;	// 0x33384051
// declared property getter: - (id)_activeTargetActions;	// 0x333849a5
// declared property getter: - (id)_addedTargetActions;	// 0x333849c5
- (void)_displayDidRefresh:(id)_display;	// 0x33384695
// declared property getter: - (id)_displayLink;	// 0x3338424d
// declared property getter: - (BOOL)_isHandlingDisplayRefresh;	// 0x33384a05
// declared property getter: - (id)_removedTargetActions;	// 0x333849e5
// declared property setter: - (void)_setActiveTargetActions:(id)actions;	// 0x333849b5
// declared property setter: - (void)_setAddedTargetActions:(id)actions;	// 0x333849d5
// declared property setter: - (void)_setDisplayLink:(id)link;	// 0x33384309
// declared property setter: - (void)_setHandlingDisplayRefresh:(BOOL)refresh;	// 0x33384a15
// declared property setter: - (void)_setRemovedTargetActions:(id)actions;	// 0x333849f5
// declared property setter: - (void)_setShouldInvalidate:(BOOL)_set;	// 0x33384a35
// declared property getter: - (BOOL)_shouldInvalidate;	// 0x33384a25
- (void)addTarget:(id)target selector:(SEL)selector;	// 0x33384395
- (void)addTarget:(id)target selector:(SEL)selector frameInterval:(int)interval;	// 0x333843b9
- (void)dealloc;	// 0x33384149
// declared property getter: - (double)duration;	// 0x333841ed
// declared property getter: - (int)frameInterval;	// 0x3338422d
- (void)invalidate;	// 0x33384681
// declared property getter: - (BOOL)isPaused;	// 0x333841c9
- (void)removeTarget:(id)target selector:(SEL)selector;	// 0x333844d5
// declared property setter: - (void)setShouldInvalidateAutomatically:(BOOL)invalidateAutomatically;	// 0x33384625
// declared property getter: - (BOOL)shouldInvalidateAutomatically;	// 0x33384a45
// declared property getter: - (double)timestamp;	// 0x3338420d
@end
