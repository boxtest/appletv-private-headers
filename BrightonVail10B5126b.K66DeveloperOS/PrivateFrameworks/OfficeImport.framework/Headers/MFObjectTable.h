/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface MFObjectTable : NSObject {
	NSMutableArray *m_objects;	// 4 = 0x4
}
- (id)init;	// 0x348c9611
- (void)clear;	// 0x348cd1e1
- (void)dealloc;	// 0x348cd525
- (int)deleteObject:(unsigned)object;	// 0x349515c5
- (id)getObject:(unsigned)object;	// 0x34a61605
- (unsigned)insertPos;	// 0x34950d31
- (int)putObject:(id)object :(unsigned)arg2;	// 0x348cc8a9
- (int)selectInto:(int)into :(id)arg2;	// 0x348ccb35
- (int)size;	// 0x348cc44d
@end
