/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSPropertyListSerialization : NSObject {
	void *reserved[6];	// 4 = 0x4
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x36110b25
+ (id)dataFromPropertyList:(id)propertyList format:(unsigned)format errorDescription:(out id *)description;	// 0x360791ad
+ (id)dataWithPropertyList:(id)propertyList format:(unsigned)format options:(unsigned)options error:(out id *)error;	// 0x3608a335
+ (BOOL)propertyList:(id)list isValidForFormat:(unsigned)format;	// 0x36110b15
+ (id)propertyListFromData:(id)data mutabilityOption:(unsigned)option format:(unsigned *)format errorDescription:(out id *)description;	// 0x36071e21
+ (id)propertyListWithData:(id)data options:(unsigned)options format:(unsigned *)format error:(out id *)error;	// 0x3608f271
+ (id)propertyListWithStream:(id)stream options:(unsigned)options format:(unsigned *)format error:(out id *)error;	// 0x36110cb1
+ (int)writePropertyList:(id)list toStream:(id)stream format:(unsigned)format options:(unsigned)options error:(out id *)error;	// 0x36110bb5
- (id)init;	// 0x36110b6d
@end

