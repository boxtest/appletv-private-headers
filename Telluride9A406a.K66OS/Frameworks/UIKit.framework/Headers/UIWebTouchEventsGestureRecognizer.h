/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIWebTouchEventsGestureRecognizer : UIGestureRecognizer {
@private
	id _touchTarget;	// 56 = 0x38
	SEL _touchAction;	// 60 = 0x3c
	unsigned _passedHitTest : 1;	// 64 = 0x40
	unsigned _defaultPrevented : 1;	// 64 = 0x40
	unsigned _inJavaScriptGesture : 1;	// 64 = 0x40
	float _originalGestureDistance;	// 68 = 0x44
	float _originalGestureAngle;	// 72 = 0x48
	int _type;	// 76 = 0x4c
	CGPoint _locationInWindow;	// 80 = 0x50
	NSMutableArray *_touchLocations;	// 88 = 0x58
	NSMutableArray *_touchIdentifiers;	// 92 = 0x5c
	NSMutableArray *_touchPhases;	// 96 = 0x60
	float _scale;	// 100 = 0x64
	float _rotation;	// 104 = 0x68
}
@property(assign, nonatomic, getter=isDefaultPrevented) BOOL defaultPrevented;	// G=0x3599db49; S=0x3599db61; @synthesize=_defaultPrevented
@property(readonly, assign, nonatomic) BOOL inJavaScriptGesture;	// G=0x357c7589; @synthesize=_inJavaScriptGesture
@property(readonly, assign, nonatomic) CGPoint locationInWindow;	// G=0x357c754d; @synthesize=_locationInWindow
@property(readonly, assign, nonatomic) float rotation;	// G=0x357c75b1; @synthesize=_rotation
@property(readonly, assign, nonatomic) float scale;	// G=0x357c75a1; @synthesize=_scale
@property(retain, nonatomic) NSMutableArray *touchIdentifiers;	// G=0x357c7569; S=0x3571ded9; @synthesize=_touchIdentifiers
@property(retain, nonatomic) NSMutableArray *touchLocations;	// G=0x357c7505; S=0x3571deb5; @synthesize=_touchLocations
@property(retain, nonatomic) NSMutableArray *touchPhases;	// G=0x357c7579; S=0x3571defd; @synthesize=_touchPhases
@property(readonly, assign, nonatomic) int type;	// G=0x357c7515; @synthesize=_type
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x3571dc61
- (unsigned)_getNextTouchIdentifier;	// 0x357c72a5
- (BOOL)_hitTestTouches:(id)touches;	// 0x357c69ed
- (id)_identifiersDescription;	// 0x3599d755
- (id)_locationsDescription;	// 0x3599d5fd
- (id)_phaseDescription:(int)description;	// 0x3599d861
- (id)_phasesDescription;	// 0x3599d8b5
- (void)_processTouches:(id)touches withEvent:(id)event type:(int)type;	// 0x357c6ca1
- (void)_recordTouches:(id)touches type:(int)type;	// 0x357c6e69
- (void)_reset;	// 0x357cb7ed
- (void)_resetGestureRecognizer;	// 0x357cb7ad
- (id)_typeDescription;	// 0x3599d5a5
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x357c8d51
- (void)dealloc;	// 0x3581ddc9
- (id)description;	// 0x3599d9d5
// declared property getter: - (BOOL)inJavaScriptGesture;	// 0x357c7589
// declared property getter: - (BOOL)isDefaultPrevented;	// 0x3599db49
// declared property getter: - (CGPoint)locationInWindow;	// 0x357c754d
// declared property getter: - (float)rotation;	// 0x357c75b1
// declared property getter: - (float)scale;	// 0x357c75a1
// declared property setter: - (void)setDefaultPrevented:(BOOL)prevented;	// 0x3599db61
// declared property setter: - (void)setTouchIdentifiers:(id)identifiers;	// 0x3571ded9
// declared property setter: - (void)setTouchLocations:(id)locations;	// 0x3571deb5
// declared property setter: - (void)setTouchPhases:(id)phases;	// 0x3571defd
// declared property getter: - (id)touchIdentifiers;	// 0x357c7569
// declared property getter: - (id)touchLocations;	// 0x357c7505
// declared property getter: - (id)touchPhases;	// 0x357c7579
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x357c6955
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3599db0d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x357cb771
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x357c91e5
// declared property getter: - (int)type;	// 0x357c7515
@end

