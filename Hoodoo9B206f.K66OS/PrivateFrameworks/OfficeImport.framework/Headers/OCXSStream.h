/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OCXSStream : NSObject {
@private
	NSMutableArray *mLevelStack;	// 4 = 0x4
}
- (id)init;	// 0x34505a6d
- (int)currentContextChildDepth;	// 0x34505d19
- (int)currentContextDepth;	// 0x34505cc9
- (void)dealloc;	// 0x3450b3b9
- (BOOL)hasLevels;	// 0x34505c99
- (BOOL)popLevel;	// 0x3450b375
- (void)pushLevel:(int)level name:(const char *)name;	// 0x34505add
@end

