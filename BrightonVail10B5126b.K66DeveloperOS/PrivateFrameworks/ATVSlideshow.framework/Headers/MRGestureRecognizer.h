/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class MRRenderer, NSArray, MRAction, MRTouchSet, NSSet, MCAction;

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
@property(retain) MCAction *cancelAction;	// G=0x332f7c01; S=0x332f7c21; 
@property(retain) MCAction *endAction;	// G=0x332f7b69; S=0x332f7b89; 
@property(retain) NSArray *matrixChain;	// G=0x332f8b29; S=0x332f8b3d; @synthesize=_matrixChain
@property(assign, nonatomic) CGSize referenceSize;	// G=0x332f8b6d; S=0x332f8b85; @synthesize=_referenceSize
@property(readonly, assign) id sender;	// G=0x332f8b15; @synthesize=_sender
@property(retain) MCAction *startAction;	// G=0x332f7a39; S=0x332f7a59; 
@property(assign, nonatomic) int state;	// G=0x332f8b4d; S=0x332f8b5d; @synthesize=_state
@property(readonly, assign) NSSet *touches;	// G=0x332f7c99; 
@property(retain) MCAction *updateAction;	// G=0x332f7ad1; S=0x332f7af1; 
- (id)initWithRenderer:(id)renderer startAction:(id)action andSender:(id)sender;	// 0x332f7859
- (void)_addSpecificObjectToAction:(id)action;	// 0x332f8b11
- (CGPoint)_localPointFromTouchPoint:(CGPoint)touchPoint;	// 0x332f88e9
- (void)_sendAction:(id)action;	// 0x332f87a5
- (void)_sendCancelActions;	// 0x332f8751
- (void)_sendEndActions;	// 0x332f86fd
- (void)_sendStartActions;	// 0x332f8655
- (void)_sendUpdateActions;	// 0x332f86a9
- (void)abort;	// 0x332f83fd
// declared property getter: - (id)cancelAction;	// 0x332f7c01
- (void)dealloc;	// 0x332f78e9
- (id)description;	// 0x332f851d
// declared property getter: - (id)endAction;	// 0x332f7b69
// declared property getter: - (id)matrixChain;	// 0x332f8b29
// declared property getter: - (CGSize)referenceSize;	// 0x332f8b6d
// declared property getter: - (id)sender;	// 0x332f8b15
// declared property setter: - (void)setCancelAction:(id)action;	// 0x332f7c21
// declared property setter: - (void)setEndAction:(id)action;	// 0x332f7b89
// declared property setter: - (void)setMatrixChain:(id)chain;	// 0x332f8b3d
// declared property setter: - (void)setReferenceSize:(CGSize)size;	// 0x332f8b85
// declared property setter: - (void)setStartAction:(id)action;	// 0x332f7a59
// declared property setter: - (void)setState:(int)state;	// 0x332f8b5d
// declared property setter: - (void)setUpdateAction:(id)action;	// 0x332f7af1
// declared property getter: - (id)startAction;	// 0x332f7a39
// declared property getter: - (int)state;	// 0x332f8b4d
- (void)touchBegan:(id)began;	// 0x332f7cb9
- (void)touchEnded:(id)ended;	// 0x332f8109
- (void)touchMoved:(id)moved;	// 0x332f7f65
// declared property getter: - (id)touches;	// 0x332f7c99
// declared property getter: - (id)updateAction;	// 0x332f7ad1
@end
