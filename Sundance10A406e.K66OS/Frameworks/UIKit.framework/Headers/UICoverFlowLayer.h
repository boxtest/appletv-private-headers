/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <CALayer.h> // Unknown library


@interface UICoverFlowLayer : CALayer {
	void *_private;	// 48 = 0x30
}
- (id)initWithFrame:(CGRect)frame numberOfCovers:(unsigned)covers numberOfPlaceholders:(unsigned)placeholders;	// 0x30ada911
- (unsigned)_coverAtScreenPosition:(CGPoint)screenPosition;	// 0x30adcbd9
- (void)_notifySelectionDidChange;	// 0x30adbc41
- (void)_prefetch:(unsigned)prefetch atIndex:(unsigned)index;	// 0x30adb8c5
- (void)_recycleLayer:(int)layer to:(int)to;	// 0x30adced9
- (void)_requestBatch;	// 0x30adb915
- (void)_requestImageAtIndex:(int)index;	// 0x30adba89
- (void)_requestImageAtIndex:(int)index quality:(unsigned)quality;	// 0x30adba1d
- (void)_setNewSelectedIndex:(int)index;	// 0x30add105
- (void)_setupFlippedCoverLayer:(id)layer;	// 0x30ae0b81
- (void)_updateTick;	// 0x30add681
- (void)benchmarkHeartbeatLongScrub;	// 0x30ae16bd
- (void)benchmarkHeartbeatScrubAndWait;	// 0x30ae1835
- (void)benchmarkHeartbeatShortScrub;	// 0x30ae1749
- (BOOL)benchmarkImageManager:(void *)manager;	// 0x30ae1fbd
- (void)benchmarkImageMode:(int)mode;	// 0x30ae25b5
- (BOOL)benchmarkLoadScrub;	// 0x30ae1e31
- (void)benchmarkLongScrubSpeed:(float)speed;	// 0x30ae267d
- (void)benchmarkMode:(int)mode;	// 0x30ae24e5
- (void)benchmarkPerformanceLog:(BOOL)log;	// 0x30ae2609
- (void)benchmarkSetEnv;	// 0x30ae21c1
- (void)benchmarkSkipImageLoad:(BOOL)load;	// 0x30ae26b9
- (int)benchmarkTick;	// 0x30ae1535
- (void)benchmarkTickMode:(int)mode;	// 0x30ae2575
- (void)benchmarkTightLoop;	// 0x30ae197d
- (void)benchmarkTightLoopScrub;	// 0x30ae1a29
- (void)benchmarkTightLoopTime:(unsigned)time;	// 0x30ae2649
- (unsigned)coverIndexAtPosition:(float)position;	// 0x30ae0b79
- (void)dealloc;	// 0x30adb3f5
- (void)displayTick;	// 0x30adfead
- (void)dragFlow:(unsigned)flow atPoint:(CGPoint)point;	// 0x30ae00e1
- (void)flipSelectedCover;	// 0x30ae142d
- (unsigned)indexOfSelectedCover;	// 0x30adcbc5
- (unsigned)numberOfCovers;	// 0x30adb3cd
- (unsigned)numberOfPlaceholders;	// 0x30adb3e1
- (void)selectCoverAtIndex:(unsigned)index;	// 0x30ae0ae9
- (void)selectCoverAtOffset:(int)offset;	// 0x30ae0b55
- (void)setDelegate:(id)delegate;	// 0x30adb4ed
- (void)setDisplayedOrientation:(int)orientation animate:(BOOL)animate;	// 0x30adc4ed
- (void)setImage:(void *)image atIndex:(unsigned)index;	// 0x30adcb45
- (void)setImage:(void *)image atIndex:(unsigned)index type:(unsigned)type;	// 0x30adc769
- (void)setImage:(void *)image atIndex:(unsigned)index type:(unsigned)type imageSubRect:(CGRect)rect;	// 0x30adc7b5
- (void)setInfoLayer:(id)layer;	// 0x30adc619
- (void)setPlaceholderImage:(void *)image atPlaceholderIndex:(unsigned)placeholderIndex;	// 0x30adb7b9
- (void)setPlaceholderImage:(void *)image atPlaceholderIndex:(unsigned)placeholderIndex imageSubRect:(CGRect)rect;	// 0x30adb7f9
- (void)setPlaceholderIndicesForCovers:(unsigned *)covers;	// 0x30adb88d
- (void)transition:(unsigned)transition withCoverFrame:(CGRect)coverFrame;	// 0x30adbcf1
- (void)transitionIn:(float)anIn;	// 0x30adbc8d
- (void)transitionIn:(float)anIn fromFrame:(CGRect)frame;	// 0x30adc48d
- (void)transitionOut:(float)anOut;	// 0x30adbcbd
- (void)transitionOut:(float)anOut toFrame:(CGRect)frame;	// 0x30adc4bd
@end
