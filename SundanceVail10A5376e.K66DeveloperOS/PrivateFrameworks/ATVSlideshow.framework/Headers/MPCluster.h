/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface MPCluster : NSObject {
	NSMutableArray *mSlides;	// 4 = 0x4
	NSMutableSet *mPathsInCluster;	// 8 = 0x8
	NSString *mName;	// 12 = 0xc
	float mRating;	// 16 = 0x10
	NSMutableDictionary *mUsageCounterPerLayer;	// 20 = 0x14
}
@property(retain) NSMutableArray *items;	// G=0x361ccc4d; S=0x361ccc61; @synthesize=mSlides
@property(copy) NSString *name;	// G=0x361ccc71; S=0x361ccc85; @synthesize=mName
@property(assign) float rating;	// G=0x361ccc95; S=0x361ccca9; @synthesize=mRating
@property(retain) NSMutableDictionary *usageCounterPerLayer;	// G=0x361cccc1; S=0x361cccd5; @synthesize=mUsageCounterPerLayer
- (id)init;	// 0x361cc2f9
- (void)addSlide:(id)slide;	// 0x361cc465
- (id)allSlides;	// 0x361cc51d
- (id)allSlidesSortedChronologically;	// 0x361cc559
- (BOOL)clusterContainsSlideAtPath:(id)path;	// 0x361cc52d
- (void)dealloc;	// 0x361cc3bd
- (id)description;	// 0x361ccbad
- (void)detailedDescription;	// 0x361cca21
// declared property getter: - (id)items;	// 0x361ccc4d
// declared property getter: - (id)name;	// 0x361ccc71
// declared property getter: - (float)rating;	// 0x361ccc95
- (void)removeAllSlides;	// 0x361cc4bd
- (void)resetAllUsageCounters;	// 0x361cc7e9
// declared property setter: - (void)setItems:(id)items;	// 0x361ccc61
// declared property setter: - (void)setName:(id)name;	// 0x361ccc85
// declared property setter: - (void)setRating:(float)rating;	// 0x361ccca9
- (void)setUsageCountForLayer:(id)layer to:(float)to;	// 0x361cc595
// declared property setter: - (void)setUsageCounterPerLayer:(id)layer;	// 0x361cccd5
- (int)slideCount;	// 0x361cc4fd
- (id)usageCountDescription;	// 0x361cc8b1
- (float)usageCountForLayer:(id)layer;	// 0x361cc6b9
// declared property getter: - (id)usageCounterPerLayer;	// 0x361cccc1
@end

