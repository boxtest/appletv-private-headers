/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAction.h"

@class NSArray, NSMutableArray;

@interface MCActionGroup : MCAction {
	NSMutableArray *_actions;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSArray *actions;	// G=0x33a5d68d; @synthesize=_actions
@property(readonly, assign, nonatomic) unsigned countOfActions;	// G=0x33a5d779; 
+ (id)actionGroup;	// 0x33a5d189
- (id)init;	// 0x33a5d1cd
- (id)initWithImprint:(id)imprint;	// 0x33a5d231
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33a5de65
- (id)actionAtIndex:(unsigned)index;	// 0x33a5d875
// declared property getter: - (id)actions;	// 0x33a5d68d
- (void)addAction:(id)action;	// 0x33a5d9a1
- (void)addActions:(id)actions;	// 0x33a5d9f1
// declared property getter: - (unsigned)countOfActions;	// 0x33a5d779
- (void)demolish;	// 0x33a5d369
- (id)description;	// 0x33a5df79
- (id)imprint;	// 0x33a5d539
- (void)insertAction:(id)action atIndex:(unsigned)index;	// 0x33a5da25
- (void)insertActions:(id)actions atIndex:(unsigned)index;	// 0x33a5da65
- (void)moveActionsAtIndices:(id)indices toIndex:(unsigned)index;	// 0x33a5dd0d
- (void)removeActionsAtIndices:(id)indices;	// 0x33a5db79
- (void)removeAllActions;	// 0x33a5dc45
@end

