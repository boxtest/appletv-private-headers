/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

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
@property(retain, nonatomic) NSDictionary *authoredVersionInfo;	// G=0x3644ea8d; S=0x3644ea9d; @synthesize
@property(assign, nonatomic) BOOL autoAdjustDuration;	// G=0x3644eb15; S=0x3644eb25; @synthesize
@property(retain, nonatomic) NSString *backgroundAudioID;	// G=0x3644ea29; S=0x3644ea39; @synthesize
@property(assign, nonatomic) CGColorRef backgroundColor;	// G=0x3644ea7d; S=0x3644e8b9; @synthesize
@property(assign, nonatomic) double duration;	// G=0x3644e939; S=0x3644e951; @synthesize
@property(assign, nonatomic) double durationPadding;	// G=0x3644e90d; S=0x3644e925; @synthesize
@property(retain, nonatomic) NSDictionary *initialState;	// G=0x3644ecf5; S=0x3644ed05; @synthesize
@property(assign, nonatomic) BOOL isDocumentLayerGroup;	// G=0x3644eb35; S=0x3644eb45; @synthesize
@property(assign, nonatomic) BOOL isTriggered;	// G=0x3644e991; S=0x3644e9a1; @synthesize
@property(retain, nonatomic) NSMutableDictionary *layerKeyDictionary;	// G=0x3644ecc1; S=0x3644ecd1; @synthesize
@property(retain, nonatomic) NSRecursiveLock *liveLock;	// G=0x3644eae1; S=0x3644eaf1; @synthesize
@property(assign, nonatomic) int loopingMode;	// G=0x3644ea5d; S=0x3644ea6d; @synthesize
@property(assign, nonatomic) double numberOfLoops;	// G=0x3644e8e1; S=0x3644e8f9; @synthesize
@property(assign, nonatomic) float opacity;	// G=0x3644eb55; S=0x3644eb65; @synthesize
@property(assign, nonatomic) double phaseInDuration;	// G=0x3644e9d1; S=0x3644e9e9; @synthesize
@property(assign, nonatomic) double phaseOutDuration;	// G=0x3644e9fd; S=0x3644ea15; @synthesize
@property(assign, nonatomic) CGPoint position;	// G=0x3644eb75; S=0x3644eb8d; @synthesize
@property(assign, nonatomic) float rotationAngle;	// G=0x3644ebed; S=0x3644ebfd; @synthesize
@property(assign, nonatomic) float scale;	// G=0x3644ec4d; S=0x3644ec5d; @synthesize
@property(assign, nonatomic) int sendLiveNotification;	// G=0x3644eac1; S=0x3644ead1; @synthesize
@property(assign, nonatomic) CGSize size;	// G=0x3644ebc1; S=0x3644ebd9; @synthesize
@property(assign, nonatomic) BOOL startsPaused;	// G=0x3644e9b1; S=0x3644e9c1; @synthesize
@property(assign, nonatomic) double timeIn;	// G=0x3644e965; S=0x3644e97d; @synthesize
@property(assign, nonatomic) BOOL usedAllPaths;	// G=0x3644ed29; S=0x3644ed39; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x3644ec6d; S=0x3644ec7d; @synthesize
@property(assign, nonatomic) float xRotationAngle;	// G=0x3644ec0d; S=0x3644ec1d; @synthesize
@property(assign, nonatomic) float yRotationAngle;	// G=0x3644ec2d; S=0x3644ec3d; @synthesize
@property(assign, nonatomic) int zIndex;	// G=0x3644eca1; S=0x3644ecb1; @synthesize
@property(assign, nonatomic) float zPosition;	// G=0x3644eba1; S=0x3644ebb1; @synthesize
// declared property getter: - (id)authoredVersionInfo;	// 0x3644ea8d
// declared property getter: - (BOOL)autoAdjustDuration;	// 0x3644eb15
// declared property getter: - (id)backgroundAudioID;	// 0x3644ea29
// declared property getter: - (CGColorRef)backgroundColor;	// 0x3644ea7d
- (void)dealloc;	// 0x3644e7cd
// declared property getter: - (double)duration;	// 0x3644e939
// declared property getter: - (double)durationPadding;	// 0x3644e90d
- (void)finalize;	// 0x3644e789
// declared property getter: - (id)initialState;	// 0x3644ecf5
// declared property getter: - (BOOL)isDocumentLayerGroup;	// 0x3644eb35
// declared property getter: - (BOOL)isTriggered;	// 0x3644e991
// declared property getter: - (id)layerKeyDictionary;	// 0x3644ecc1
// declared property getter: - (id)liveLock;	// 0x3644eae1
// declared property getter: - (int)loopingMode;	// 0x3644ea5d
// declared property getter: - (double)numberOfLoops;	// 0x3644e8e1
// declared property getter: - (float)opacity;	// 0x3644eb55
// declared property getter: - (double)phaseInDuration;	// 0x3644e9d1
// declared property getter: - (double)phaseOutDuration;	// 0x3644e9fd
// declared property getter: - (CGPoint)position;	// 0x3644eb75
// declared property getter: - (float)rotationAngle;	// 0x3644ebed
// declared property getter: - (float)scale;	// 0x3644ec4d
// declared property getter: - (int)sendLiveNotification;	// 0x3644eac1
// declared property setter: - (void)setAuthoredVersionInfo:(id)info;	// 0x3644ea9d
// declared property setter: - (void)setAutoAdjustDuration:(BOOL)duration;	// 0x3644eb25
// declared property setter: - (void)setBackgroundAudioID:(id)anId;	// 0x3644ea39
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x3644e8b9
// declared property setter: - (void)setDuration:(double)duration;	// 0x3644e951
// declared property setter: - (void)setDurationPadding:(double)padding;	// 0x3644e925
// declared property setter: - (void)setInitialState:(id)state;	// 0x3644ed05
// declared property setter: - (void)setIsDocumentLayerGroup:(BOOL)group;	// 0x3644eb45
// declared property setter: - (void)setIsTriggered:(BOOL)triggered;	// 0x3644e9a1
// declared property setter: - (void)setLayerKeyDictionary:(id)dictionary;	// 0x3644ecd1
// declared property setter: - (void)setLiveLock:(id)lock;	// 0x3644eaf1
// declared property setter: - (void)setLoopingMode:(int)mode;	// 0x3644ea6d
// declared property setter: - (void)setNumberOfLoops:(double)loops;	// 0x3644e8f9
// declared property setter: - (void)setOpacity:(float)opacity;	// 0x3644eb65
// declared property setter: - (void)setPhaseInDuration:(double)duration;	// 0x3644e9e9
// declared property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x3644ea15
// declared property setter: - (void)setPosition:(CGPoint)position;	// 0x3644eb8d
// declared property setter: - (void)setRotationAngle:(float)angle;	// 0x3644ebfd
// declared property setter: - (void)setScale:(float)scale;	// 0x3644ec5d
// declared property setter: - (void)setSendLiveNotification:(int)notification;	// 0x3644ead1
// declared property setter: - (void)setSize:(CGSize)size;	// 0x3644ebd9
// declared property setter: - (void)setStartsPaused:(BOOL)paused;	// 0x3644e9c1
// declared property setter: - (void)setTimeIn:(double)anIn;	// 0x3644e97d
// declared property setter: - (void)setUsedAllPaths:(BOOL)paths;	// 0x3644ed39
// declared property setter: - (void)setUuid:(id)uuid;	// 0x3644ec7d
// declared property setter: - (void)setXRotationAngle:(float)angle;	// 0x3644ec1d
// declared property setter: - (void)setYRotationAngle:(float)angle;	// 0x3644ec3d
// declared property setter: - (void)setZIndex:(int)index;	// 0x3644ecb1
// declared property setter: - (void)setZPosition:(float)position;	// 0x3644ebb1
// declared property getter: - (CGSize)size;	// 0x3644ebc1
// declared property getter: - (BOOL)startsPaused;	// 0x3644e9b1
// declared property getter: - (double)timeIn;	// 0x3644e965
// declared property getter: - (BOOL)usedAllPaths;	// 0x3644ed29
// declared property getter: - (id)uuid;	// 0x3644ec6d
// declared property getter: - (float)xRotationAngle;	// 0x3644ec0d
// declared property getter: - (float)yRotationAngle;	// 0x3644ec2d
// declared property getter: - (int)zIndex;	// 0x3644eca1
// declared property getter: - (float)zPosition;	// 0x3644eba1
@end

