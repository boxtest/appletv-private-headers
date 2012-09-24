/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSMutableArray, ATVRCButtonPatternSet, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVRCCapture : XXUnknownSuperclass {
	int _captureState;	// 4 = 0x4
	NSMutableArray *_capturedEvents;	// 8 = 0x8
	ATVRCButtonPatternSet *_workingPatternSet;	// 12 = 0xc
	NSTimer *_discontinuityTrigger;	// 16 = 0x10
	NSDate *_captureStartTime;	// 20 = 0x14
}
@property(readonly, assign) int captureState;	// G=0x222f79; converted property
@property(readonly, retain) ATVRCButtonPatternSet *workingPatternSet;	// G=0x222f89; converted property
- (id)init;	// 0x222d49
- (void)_clearDiscontinuityTrigger;	// 0x2233f9
- (void)_discontinuityTrigger:(id)trigger;	// 0x22342d
- (void)_firstCommandEventReceived;	// 0x2230c1
- (BOOL)_identifyCommandPattern;	// 0x223559
- (void)_mainCaptureDoneTrigger:(id)trigger;	// 0x223201
- (double)_maxIntervalBetweenEvents;	// 0x223709
- (void)_resetDiscontinuityTrigger;	// 0x223381
- (void)_setCaptureState:(int)state;	// 0x223031
- (void)addEvent:(id)event;	// 0x222e81
- (double)captureProgress;	// 0x222f99
// converted property getter: - (int)captureState;	// 0x222f79
- (void)dealloc;	// 0x222dd9
- (void)reset;	// 0x222f0d
- (void)startCapture;	// 0x222e51
// converted property getter: - (id)workingPatternSet;	// 0x222f89
@end
