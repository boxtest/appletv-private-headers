/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "AVQueueFeeder.h"
#import "Celestial-Structs.h"

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder {
	NSMutableArray *_items;	// 4 = 0x4
}
- (id)init;	// 0x335d7511
- (id)initWithArray:(id)array;	// 0x335d7575
- (void)dealloc;	// 0x335d75c9
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x335d7741
- (unsigned)itemCount;	// 0x335d7651
- (id)itemForIndex:(unsigned)index;	// 0x335d7615
- (unsigned)numberOfPaths;	// 0x335d7661
- (id)pathAtIndex:(unsigned)index;	// 0x335d7681
- (void)removeObjectAtIndex:(unsigned)index;	// 0x335d7781
- (void)shuffleWithCurrentIndex:(unsigned)currentIndex;	// 0x335d77c1
@end
