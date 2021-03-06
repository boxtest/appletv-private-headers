/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class NSMutableDictionary;

@interface PBSlideState : NSObject {
	NSMutableDictionary *mBuildOrderMap;	// 4 = 0x4
	unsigned mCurrentGroupId;	// 8 = 0x8
}
- (id)init;	// 0x316b2935
- (void)addBuild:(id)build order:(unsigned)order;	// 0x319165f5
- (id)buildOrderMap;	// 0x31916699
- (void)dealloc;	// 0x3171ff65
- (unsigned)generateGroupId;	// 0x319166a9
- (void)reset;	// 0x319165bd
@end

