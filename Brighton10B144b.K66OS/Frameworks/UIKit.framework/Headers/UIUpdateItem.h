/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSIndexPath, UITableViewUpdateGap;

__attribute__((visibility("hidden")))
@interface UIUpdateItem : NSObject {
	int _action;	// 4 = 0x4
	NSIndexPath *_indexPath;	// 8 = 0x8
	int _animation;	// 12 = 0xc
	float _offset;	// 16 = 0x10
	UITableViewUpdateGap *_gap;	// 20 = 0x14
	BOOL _headerFooterOnly;	// 24 = 0x18
	BOOL _skipAnimation;	// 25 = 0x19
}
@property(readonly, assign, nonatomic) int action;	// G=0x32b74619; @synthesize=_action
@property(assign, nonatomic) int animation;	// G=0x32b745b5; S=0x32d8a201; @synthesize=_animation
@property(assign, nonatomic) UITableViewUpdateGap *gap;	// G=0x32d8a231; S=0x32b74889; @synthesize=_gap
@property(assign, nonatomic) BOOL headerFooterOnly;	// G=0x32b745c5; S=0x32b745d5; @synthesize=_headerFooterOnly
@property(readonly, assign, nonatomic) NSIndexPath *indexPath;	// G=0x32b745a5; @synthesize=_indexPath
@property(assign, nonatomic) float offset;	// G=0x32d8a211; S=0x32d8a221; @synthesize=_offset
@property(assign, nonatomic) BOOL skipAnimation;	// G=0x32d8a241; S=0x32d8a251; @synthesize=_skipAnimation
- (id)initWithAction:(int)action forIndexPath:(id)indexPath animation:(int)animation;	// 0x32b74525
- (id)_actionDescription;	// 0x32d8a1a9
// declared property getter: - (int)action;	// 0x32b74619
// declared property getter: - (int)animation;	// 0x32b745b5
- (int)compareIndexPaths:(id)paths;	// 0x32b748c5
- (void)dealloc;	// 0x32b23905
// declared property getter: - (id)gap;	// 0x32d8a231
// declared property getter: - (BOOL)headerFooterOnly;	// 0x32b745c5
// declared property getter: - (id)indexPath;	// 0x32b745a5
- (int)inverseCompareIndexPaths:(id)paths;	// 0x32c4ded5
- (BOOL)isSectionOperation;	// 0x32b745e5
// declared property getter: - (float)offset;	// 0x32d8a211
// declared property setter: - (void)setAnimation:(int)animation;	// 0x32d8a201
// declared property setter: - (void)setGap:(id)gap;	// 0x32b74889
// declared property setter: - (void)setHeaderFooterOnly:(BOOL)only;	// 0x32b745d5
// declared property setter: - (void)setOffset:(float)offset;	// 0x32d8a221
// declared property setter: - (void)setSkipAnimation:(BOOL)animation;	// 0x32d8a251
// declared property getter: - (BOOL)skipAnimation;	// 0x32d8a241
@end

