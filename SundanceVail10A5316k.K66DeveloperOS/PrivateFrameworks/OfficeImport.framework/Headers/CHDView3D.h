/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHDView3D : NSObject {
@private
	int mRotationX;	// 4 = 0x4
	int mRotationY;	// 8 = 0x8
	int mDepthPercent;	// 12 = 0xc
	int mGapDepthPercent;	// 16 = 0x10
	int mHeightPercent;	// 20 = 0x14
	int mPerspective;	// 24 = 0x18
	bool mRightAngleAxes;	// 28 = 0x1c
	bool mCluster;	// 29 = 0x1d
	bool mAutoscale;	// 30 = 0x1e
}
@property(assign, getter=isAutoscale) bool autoscale;	// G=0x311f895d; S=0x311f8971; converted property
@property(assign, getter=isCluster) bool cluster;	// G=0x311f8949; S=0x31184719; converted property
@property(assign) int depthPercent;	// G=0x311f88f5; S=0x311846d1; converted property
@property(assign) int gapDepthPercent;	// G=0x311f8905; S=0x311846e1; converted property
@property(assign) int heightPercent;	// G=0x311f8915; S=0x311846fd; converted property
@property(assign) int perspective;	// G=0x311f8925; S=0x311846a9; converted property
@property(assign, getter=isRightAngleAxes) bool rightAngleAxes;	// G=0x311f8935; S=0x311846c1; converted property
@property(assign) int rotationX;	// G=0x311f88e5; S=0x31184689; converted property
@property(assign) int rotationY;	// G=0x311f88d5; S=0x31184699; converted property
- (id)init;	// 0x311845c5
// converted property getter: - (int)depthPercent;	// 0x311f88f5
// converted property getter: - (int)gapDepthPercent;	// 0x311f8905
// converted property getter: - (int)heightPercent;	// 0x311f8915
// converted property getter: - (bool)isAutoscale;	// 0x311f895d
// converted property getter: - (bool)isCluster;	// 0x311f8949
// converted property getter: - (bool)isRightAngleAxes;	// 0x311f8935
// converted property getter: - (int)perspective;	// 0x311f8925
// converted property getter: - (int)rotationX;	// 0x311f88e5
// converted property getter: - (int)rotationY;	// 0x311f88d5
// converted property setter: - (void)setAutoscale:(bool)autoscale;	// 0x311f8971
// converted property setter: - (void)setCluster:(bool)cluster;	// 0x31184719
// converted property setter: - (void)setDepthPercent:(int)percent;	// 0x311846d1
// converted property setter: - (void)setGapDepthPercent:(int)percent;	// 0x311846e1
// converted property setter: - (void)setHeightPercent:(int)percent;	// 0x311846fd
// converted property setter: - (void)setPerspective:(int)perspective;	// 0x311846a9
// converted property setter: - (void)setRightAngleAxes:(bool)axes;	// 0x311846c1
// converted property setter: - (void)setRotationX:(int)x;	// 0x31184689
// converted property setter: - (void)setRotationY:(int)y;	// 0x31184699
@end

