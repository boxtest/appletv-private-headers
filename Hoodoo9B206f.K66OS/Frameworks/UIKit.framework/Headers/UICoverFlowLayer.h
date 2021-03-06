/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <CALayer.h> // Unknown library
#import "UIKit-Structs.h"


@interface UICoverFlowLayer : CALayer {
@private
	void *_private;	// 48 = 0x30
}
- (id)initWithFrame:(CGRect)frame numberOfCovers:(unsigned)covers numberOfPlaceholders:(unsigned)placeholders;	// 0x354740c1
- (unsigned)_coverAtScreenPosition:(CGPoint)screenPosition;	// 0x3547afc5
- (void)_notifySelectionDidChange;	// 0x354791f5
- (void)_prefetch:(unsigned)prefetch atIndex:(unsigned)index;	// 0x35519975
- (void)_recycleLayer:(int)layer to:(int)to;	// 0x3547b2cd
- (void)_requestBatch;	// 0x3547946d
- (void)_requestImageAtIndex:(int)index;	// 0x3547923d
- (void)_requestImageAtIndex:(int)index quality:(unsigned)quality;	// 0x35479401
- (void)_setNewSelectedIndex:(int)index;	// 0x35478cc1
- (void)_setupFlippedCoverLayer:(id)layer;	// 0x3547b5f5
- (void)_updateTick;	// 0x35476351
- (void)benchmarkHeartbeatLongScrub;	// 0x35519cfd
- (void)benchmarkHeartbeatScrubAndWait;	// 0x35519e75
- (void)benchmarkHeartbeatShortScrub;	// 0x35519d7d
- (BOOL)benchmarkImageManager:(void *)manager;	// 0x3551a601
- (void)benchmarkImageMode:(int)mode;	// 0x3551a89d
- (BOOL)benchmarkLoadScrub;	// 0x3551a475
- (void)benchmarkLongScrubSpeed:(float)speed;	// 0x3551a969
- (void)benchmarkMode:(int)mode;	// 0x3551a7d1
- (void)benchmarkPerformanceLog:(BOOL)log;	// 0x3551a8f1
- (void)benchmarkSetEnv;	// 0x35474bf9
- (void)benchmarkSkipImageLoad:(BOOL)load;	// 0x3551a9a5
- (int)benchmarkTick;	// 0x35519b75
- (void)benchmarkTickMode:(int)mode;	// 0x3551a859
- (void)benchmarkTightLoop;	// 0x35519f99
- (void)benchmarkTightLoopScrub;	// 0x3551a045
- (void)benchmarkTightLoopTime:(unsigned)time;	// 0x3551a935
- (unsigned)coverIndexAtPosition:(float)position;	// 0x35519b71
- (void)dealloc;	// 0x3547c301
- (void)displayTick;	// 0x3547959d
- (void)dragFlow:(unsigned)flow atPoint:(CGPoint)point;	// 0x3547a5a1
- (void)flipSelectedCover;	// 0x3547b4e5
- (unsigned)indexOfSelectedCover;	// 0x35475621
- (unsigned)numberOfCovers;	// 0x3551990d
- (unsigned)numberOfPlaceholders;	// 0x35519921
- (void)selectCoverAtIndex:(unsigned)index;	// 0x35475635
- (void)selectCoverAtOffset:(int)offset;	// 0x35519b4d
- (void)setDelegate:(id)delegate;	// 0x35475011
- (void)setDisplayedOrientation:(int)orientation animate:(BOOL)animate;	// 0x35474ee5
- (void)setImage:(void *)image atIndex:(unsigned)index;	// 0x35519acd
- (void)setImage:(void *)image atIndex:(unsigned)index type:(unsigned)type;	// 0x35519a85
- (void)setImage:(void *)image atIndex:(unsigned)index type:(unsigned)type imageSubRect:(CGRect)rect;	// 0x354797c5
- (void)setInfoLayer:(id)layer;	// 0x3547a3e5
- (void)setPlaceholderImage:(void *)image atPlaceholderIndex:(unsigned)placeholderIndex;	// 0x35519935
- (void)setPlaceholderImage:(void *)image atPlaceholderIndex:(unsigned)placeholderIndex imageSubRect:(CGRect)rect;	// 0x3547536d
- (void)setPlaceholderIndicesForCovers:(unsigned *)covers;	// 0x35475401
- (void)transition:(unsigned)transition withCoverFrame:(CGRect)coverFrame;	// 0x35475bc9
- (void)transitionIn:(float)anIn;	// 0x355199c5
- (void)transitionIn:(float)anIn fromFrame:(CGRect)frame;	// 0x35519a25
- (void)transitionOut:(float)anOut;	// 0x355199f5
- (void)transitionOut:(float)anOut toFrame:(CGRect)frame;	// 0x35519a55
@end

