/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface UIUpdateItem : NSObject {
@private
	int _action;	// 4 = 0x4
	NSIndexPath *_indexPath;	// 8 = 0x8
	int _animation;	// 12 = 0xc
	float _offset;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) int action;	// G=0x301a69e5; @synthesize=_action
@property(readonly, assign, nonatomic) int animation;	// G=0x301a663d; @synthesize=_animation
@property(readonly, assign, nonatomic) NSIndexPath *indexPath;	// G=0x301a662d; @synthesize=_indexPath
@property(assign, nonatomic) float offset;	// G=0x30298fed; S=0x30298ffd; @synthesize=_offset
- (id)initWithAction:(int)action forIndexPath:(id)indexPath animation:(int)animation;	// 0x301a5179
- (id)_actionDescription;	// 0x30298fad
// declared property getter: - (int)action;	// 0x301a69e5
// declared property getter: - (int)animation;	// 0x301a663d
- (int)compareIndexPaths:(id)paths;	// 0x301b073d
- (void)dealloc;	// 0x301af135
// declared property getter: - (id)indexPath;	// 0x301a662d
- (int)inverseCompareIndexPaths:(id)paths;	// 0x301b0305
- (BOOL)isSectionOperation;	// 0x301a664d
// declared property getter: - (float)offset;	// 0x30298fed
// declared property setter: - (void)setOffset:(float)offset;	// 0x30298ffd
@end

