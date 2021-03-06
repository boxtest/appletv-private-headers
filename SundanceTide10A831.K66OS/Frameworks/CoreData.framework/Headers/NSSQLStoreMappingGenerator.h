/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface NSSQLStoreMappingGenerator : NSObject {
	NSMutableDictionary *_names;	// 4 = 0x4
}
+ (id)defaultMappingGenerator;	// 0x33d1558d
+ (void)invalidate;	// 0x33de8139
- (id)init;	// 0x33d155d5
- (void)dealloc;	// 0x33de8161
- (id)generateTableName:(id)name;	// 0x33d15631
- (id)newGeneratedPropertyName:(id)name;	// 0x33d17811
- (id)newUniqueNameWithBase:(unsigned short *)base withLength:(unsigned)length;	// 0x33d1794d
- (id)uniqueNameWithBase:(id)base;	// 0x33d184d1
@end

