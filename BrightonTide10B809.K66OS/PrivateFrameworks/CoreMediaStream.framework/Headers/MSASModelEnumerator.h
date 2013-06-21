/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSEnumerator.h> // Unknown library


@interface MSASModelEnumerator : NSEnumerator {
	sqlite3 *_db;	// 4 = 0x4
	sqlite3_stmt *_stmt;	// 8 = 0x8
	id _stepBlock;	// 12 = 0xc
}
@property(assign, nonatomic) sqlite3 *db;	// G=0x337c5cd9; S=0x337c5ce9; @synthesize=_db
@property(copy, nonatomic) id stepBlock;	// G=0x337c5d19; S=0x337c5d2d; @synthesize=_stepBlock
@property(assign, nonatomic) sqlite3_stmt *stmt;	// G=0x337c5cf9; S=0x337c5d09; @synthesize=_stmt
+ (id)enumeratorWithDatabase:(sqlite3 *)database query:(id)query stepBlock:(id)block;	// 0x337c5959
- (id)init;	// 0x337c59c9
- (id)initWithDatabase:(sqlite3 *)database query:(id)query stepBlock:(id)block;	// 0x337c59f1
- (void).cxx_destruct;	// 0x337c5d3d
// declared property getter: - (sqlite3 *)db;	// 0x337c5cd9
- (void)dealloc;	// 0x337c5b45
- (id)nextObject;	// 0x337c5b95
// declared property setter: - (void)setDb:(sqlite3 *)db;	// 0x337c5ce9
// declared property setter: - (void)setStepBlock:(id)block;	// 0x337c5d2d
// declared property setter: - (void)setStmt:(sqlite3_stmt *)stmt;	// 0x337c5d09
// declared property getter: - (id)stepBlock;	// 0x337c5d19
// declared property getter: - (sqlite3_stmt *)stmt;	// 0x337c5cf9
@end
