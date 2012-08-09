/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRRenderer, NSArray, NSSet, MCAction, MRAction, MRTouchSet;

@interface MRGestureRecognizer : NSObject {
	MRRenderer *_renderer;	// 4 = 0x4
	MRAction *_automaticStartAction;	// 8 = 0x8
	MRAction *_automaticUpdateAction;	// 12 = 0xc
	MRAction *_automaticEndAction;	// 16 = 0x10
	MRAction *_automaticCancelAction;	// 20 = 0x14
	MRAction *_startAction;	// 24 = 0x18
	MRAction *_updateAction;	// 28 = 0x1c
	MRAction *_endAction;	// 32 = 0x20
	MRAction *_cancelAction;	// 36 = 0x24
	NSObject *_sender;	// 40 = 0x28
	NSObject *_target;	// 44 = 0x2c
	NSArray *_matrixChain;	// 48 = 0x30
	int _state;	// 52 = 0x34
	CGSize _referenceSize;	// 56 = 0x38
	MRTouchSet *_touchSet;	// 64 = 0x40
	CGPoint _centroidStartLocation;	// 68 = 0x44
	CGPoint _centroidLocation;	// 76 = 0x4c
	CGPoint _previousCentroidLocation;	// 84 = 0x54
	CGPoint _offsetFromCentroid;	// 92 = 0x5c
	float _scale;	// 100 = 0x64
	float _previousScale;	// 104 = 0x68
	float _ratioFromScale;	// 108 = 0x6c
	float _rotation;	// 112 = 0x70
	float _previousRotation;	// 116 = 0x74
	float _offsetFromRotation;	// 120 = 0x78
	double _startTime;	// 124 = 0x7c
	double _hitTime;	// 132 = 0x84
	double _previousHitTime;	// 140 = 0x8c
}
@property(retain) MCAction *cancelAction;	// G=0x3355f491; S=0x3355f4b1; 
@property(retain) MCAction *endAction;	// G=0x3355f3f9; S=0x3355f419; 
@property(retain) NSArray *matrixChain;	// G=0x335603b9; S=0x335603cd; @synthesize=_matrixChain
@property(assign, nonatomic) CGSize referenceSize;	// G=0x33560411; S=0x33560429; @synthesize=_referenceSize
@property(readonly, assign) id sender;	// G=0x335603a5; @synthesize=_sender
@property(retain) MCAction *startAction;	// G=0x3355f2c9; S=0x3355f2e9; 
@property(assign, nonatomic) int state;	// G=0x335603f1; S=0x33560401; @synthesize=_state
@property(readonly, assign) NSSet *touches;	// G=0x3355f529; 
@property(retain) MCAction *updateAction;	// G=0x3355f361; S=0x3355f381; 
- (id)initWithRenderer:(id)renderer startAction:(id)action andSender:(id)sender;	// 0x3355f0e9
- (void)_addSpecificObjectToAction:(id)action;	// 0x335603a1
- (CGPoint)_localPointFromTouchPoint:(CGPoint)touchPoint;	// 0x33560179
- (void)_sendAction:(id)action;	// 0x33560035
- (void)_sendCancelActions;	// 0x3355ffe1
- (void)_sendEndActions;	// 0x3355ff8d
- (void)_sendStartActions;	// 0x3355fee5
- (void)_sendUpdateActions;	// 0x3355ff39
- (void)abort;	// 0x3355fc8d
// declared property getter: - (id)cancelAction;	// 0x3355f491
- (void)dealloc;	// 0x3355f179
- (id)description;	// 0x3355fdad
// declared property getter: - (id)endAction;	// 0x3355f3f9
// declared property getter: - (id)matrixChain;	// 0x335603b9
// declared property getter: - (CGSize)referenceSize;	// 0x33560411
// declared property getter: - (id)sender;	// 0x335603a5
// declared property setter: - (void)setCancelAction:(id)action;	// 0x3355f4b1
// declared property setter: - (void)setEndAction:(id)action;	// 0x3355f419
// declared property setter: - (void)setMatrixChain:(id)chain;	// 0x335603cd
// declared property setter: - (void)setReferenceSize:(CGSize)size;	// 0x33560429
// declared property setter: - (void)setStartAction:(id)action;	// 0x3355f2e9
// declared property setter: - (void)setState:(int)state;	// 0x33560401
// declared property setter: - (void)setUpdateAction:(id)action;	// 0x3355f381
// declared property getter: - (id)startAction;	// 0x3355f2c9
// declared property getter: - (int)state;	// 0x335603f1
- (void)touchBegan:(id)began;	// 0x3355f549
- (void)touchEnded:(id)ended;	// 0x3355f999
- (void)touchMoved:(id)moved;	// 0x3355f7f5
// declared property getter: - (id)touches;	// 0x3355f529
// declared property getter: - (id)updateAction;	// 0x3355f361
@end
