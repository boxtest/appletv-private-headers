/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "TLVibrationRecorderRippleView.h"
#import "ToneLibrary-Structs.h"

@class TLVibrationPattern;
@protocol TLVibrationRecorderTouchSurfaceDelegate;

@interface TLVibrationRecorderTouchSurface : TLVibrationRecorderRippleView {
	id<TLVibrationRecorderTouchSurfaceDelegate> _delegate;	// 200 = 0xc8
	BOOL _recordingMode;	// 204 = 0xcc
	id _recordingContextObject;	// 208 = 0xd0
	BOOL _shouldIgnoreCurrentTouch;	// 212 = 0xd4
	BOOL _replayMode;	// 213 = 0xd5
	TLVibrationPattern *_vibrationPatternToReplay;	// 216 = 0xd8
	double _replayModeWasEnteredStartTime;	// 220 = 0xdc
	double _vibrationPatternMaximumDuration;	// 228 = 0xe4
}
@property(retain, nonatomic, setter=_setVibrationPatternToReplay:) TLVibrationPattern *_vibrationPatternToReplay;	// G=0x33abaa09; S=0x33abaa19; @synthesize
@property(assign, nonatomic) id<TLVibrationRecorderTouchSurfaceDelegate> delegate;	// G=0x33aba9e9; S=0x33aba9f9; @synthesize=_delegate
- (id)initWithFrame:(CGRect)frame vibrationPatternMaximumDuration:(double)duration;	// 0x33aba075
// declared property setter: - (void)_setVibrationPatternToReplay:(id)replay;	// 0x33abaa19
- (void)_updateTouchLocationForReplayMode:(id)replayMode;	// 0x33aba8a5
// declared property getter: - (id)_vibrationPatternToReplay;	// 0x33abaa09
- (void)currentVibrationComponentShouldEnd;	// 0x33aba739
- (void)dealloc;	// 0x33aba195
// declared property getter: - (id)delegate;	// 0x33aba9e9
- (void)enterRecordingMode;	// 0x33aba625
- (void)enterReplayModeWithVibrationPattern:(id)vibrationPattern;	// 0x33aba77d
- (void)exitRecordingMode;	// 0x33aba6a9
- (void)exitReplayMode;	// 0x33aba81d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33aba9f9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33aba21d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33aba615
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33aba4e5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33aba381
@end
