/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSRecursiveLock, NSDictionary;

@interface MPLayerGroupInternal : NSObject {
	double numberOfLoops;	// 4 = 0x4
	int loopingMode;	// 12 = 0xc
	double durationPadding;	// 16 = 0x10
	double duration;	// 24 = 0x18
	double timeIn;	// 32 = 0x20
	double phaseInDuration;	// 40 = 0x28
	double phaseOutDuration;	// 48 = 0x30
	NSString *backgroundAudioID;	// 56 = 0x38
	CGColorRef backgroundColor;	// 60 = 0x3c
	NSDictionary *authoredVersionInfo;	// 64 = 0x40
	int sendLiveNotification;	// 68 = 0x44
	NSRecursiveLock *liveLock;	// 72 = 0x48
	BOOL autoAdjustDuration;	// 76 = 0x4c
	BOOL isDocumentLayerGroup;	// 77 = 0x4d
	BOOL isTriggered;	// 78 = 0x4e
	BOOL startsPaused;	// 79 = 0x4f
	BOOL usedAllPaths;	// 80 = 0x50
	float opacity;	// 84 = 0x54
	CGPoint position;	// 88 = 0x58
	float zPosition;	// 96 = 0x60
	CGSize size;	// 100 = 0x64
	float rotationAngle;	// 108 = 0x6c
	float xRotationAngle;	// 112 = 0x70
	float yRotationAngle;	// 116 = 0x74
	float scale;	// 120 = 0x78
	int zIndex;	// 124 = 0x7c
	NSString *uuid;	// 128 = 0x80
	NSMutableDictionary *layerKeyDictionary;	// 132 = 0x84
	NSDictionary *initialState;	// 136 = 0x88
}
@property(retain, nonatomic) NSDictionary *authoredVersionInfo;	// G=0x33967cf1; S=0x33967d01; @synthesize
@property(assign, nonatomic) BOOL autoAdjustDuration;	// G=0x33967d51; S=0x33967d61; @synthesize
@property(retain, nonatomic) NSString *backgroundAudioID;	// G=0x33967ca1; S=0x33967cb1; @synthesize
@property(assign, nonatomic) CGColorRef backgroundColor;	// G=0x33967ce1; S=0x33967b31; @synthesize
@property(assign, nonatomic) double duration;	// G=0x33967bb1; S=0x33967bc9; @synthesize
@property(assign, nonatomic) double durationPadding;	// G=0x33967b85; S=0x33967b9d; @synthesize
@property(retain, nonatomic) NSDictionary *initialState;	// G=0x33967f09; S=0x33967f19; @synthesize
@property(assign, nonatomic) BOOL isDocumentLayerGroup;	// G=0x33967d71; S=0x33967d81; @synthesize
@property(assign, nonatomic) BOOL isTriggered;	// G=0x33967c09; S=0x33967c19; @synthesize
@property(retain, nonatomic) NSMutableDictionary *layerKeyDictionary;	// G=0x33967ee9; S=0x33967ef9; @synthesize
@property(retain, nonatomic) NSRecursiveLock *liveLock;	// G=0x33967d31; S=0x33967d41; @synthesize
@property(assign, nonatomic) int loopingMode;	// G=0x33967cc1; S=0x33967cd1; @synthesize
@property(assign, nonatomic) double numberOfLoops;	// G=0x33967b59; S=0x33967b71; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x33967d91; S=0x33967da1; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x33967c49; S=0x33967c61; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x33967c75; S=0x33967c8d; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x33967db1; S=0x33967dc9; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x33967e29; S=0x33967e39; @synthesize
@property(assign, nonatomic) float scale;	// G=0x33967e89; S=0x33967e99; @synthesize
@property(assign, nonatomic) int sendLiveNotification;	// G=0x33967d11; S=0x33967d21; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x33967dfd; S=0x33967e15; @synthesize
@property(assign, nonatomic) BOOL startsPaused;	// G=0x33967c29; S=0x33967c39; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x33967bdd; S=0x33967bf5; @synthesize
@property(assign, nonatomic) BOOL usedAllPaths;	// G=0x33967f29; S=0x33967f39; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x33967ea9; S=0x33967eb9; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x33967e49; S=0x33967e59; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x33967e69; S=0x33967e79; @synthesize
@property(assign, nonatomic) int zIndex;	// G=0x33967ec9; S=0x33967ed9; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x33967ddd; S=0x33967ded; @synthesize
// declared property getter: - (id)authoredVersionInfo;	// 0x33967cf1
// declared property getter: - (BOOL)autoAdjustDuration;	// 0x33967d51
// declared property getter: - (id)backgroundAudioID;	// 0x33967ca1
// declared property getter: - (CGColorRef)backgroundColor;	// 0x33967ce1
- (void)dealloc;	// 0x33967a45
// declared property getter: - (double)duration;	// 0x33967bb1
// declared property getter: - (double)durationPadding;	// 0x33967b85
- (void)finalize;	// 0x33967a01
// declared property getter: - (id)initialState;	// 0x33967f09
// declared property getter: - (BOOL)isDocumentLayerGroup;	// 0x33967d71
// declared property getter: - (BOOL)isTriggered;	// 0x33967c09
// declared property getter: - (id)layerKeyDictionary;	// 0x33967ee9
// declared property getter: - (id)liveLock;	// 0x33967d31
// declared property getter: - (int)loopingMode;	// 0x33967cc1
// declared property getter: - (double)numberOfLoops;	// 0x33967b59
// declared property getter: - (float)opacity;	// 0x33967d91
// declared property getter: - (double)phaseInDuration;	// 0x33967c49
// declared property getter: - (double)phaseOutDuration;	// 0x33967c75
// declared property getter: - (CGPoint)position;	// 0x33967db1
// declared property getter: - (float)rotationAngle;	// 0x33967e29
// declared property getter: - (float)scale;	// 0x33967e89
// declared property getter: - (int)sendLiveNotification;	// 0x33967d11
// declared property setter: - (void)setAuthoredVersionInfo:(id)info;	// 0x33967d01
// declared property setter: - (void)setAutoAdjustDuration:(BOOL)duration;	// 0x33967d61
// declared property setter: - (void)setBackgroundAudioID:(id)anId;	// 0x33967cb1
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x33967b31
// declared property setter: - (void)setDuration:(double)duration;	// 0x33967bc9
// declared property setter: - (void)setDurationPadding:(double)padding;	// 0x33967b9d
// declared property setter: - (void)setInitialState:(id)state;	// 0x33967f19
// declared property setter: - (void)setIsDocumentLayerGroup:(BOOL)group;	// 0x33967d81
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x33967c19
// declared property setter: - (void)setLayerKeyDictionary:(id)dictionary;	// 0x33967ef9
// declared property setter: - (void)setLiveLock:(id)lock;	// 0x33967d41
// declared property setter: - (void)setLoopingMode:(int)mode;	// 0x33967cd1
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x33967b71
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x33967da1
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x33967c61
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x33967c8d
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x33967dc9
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x33967e39
// declared property setter: - (void)setScale:(float)scale;	// 0x33967e99
// declared property setter: - (void)setSendLiveNotification:(int)notification;	// 0x33967d21
// declared property setter: - (void)setSize:(CGSize)size;	// 0x33967e15
// declared property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x33967c39
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x33967bf5
// declared property setter: - (void)setUsedAllPaths:(BOOL)paths;	// 0x33967f39
// declared property setter: - (void)setUuid:(id)uuid;	// 0x33967eb9
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x33967e59
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x33967e79
// declared property setter: - (void)setZIndex:(int)index;	// 0x33967ed9
// declared property setter: - (void)setZPosition:(float)position;	// 0x33967ded
// declared property getter: - (CGSize)size;	// 0x33967dfd
// declared property getter: - (BOOL)startsPaused;	// 0x33967c29
// declared property getter: - (double)timeIn;	// 0x33967bdd
// declared property getter: - (BOOL)usedAllPaths;	// 0x33967f29
// declared property getter: - (id)uuid;	// 0x33967ea9
// declared property getter: - (float)xRotationAngle;	// 0x33967e49
// declared property getter: - (float)yRotationAngle;	// 0x33967e69
// declared property getter: - (int)zIndex;	// 0x33967ec9
// declared property getter: - (float)zPosition;	// 0x33967ddd
@end

