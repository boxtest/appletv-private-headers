/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import "NSStoreMapNode.h"


__attribute__((visibility("hidden")))
@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding> {
@private
	id *_attributes;	// 24 = 0x18
	id _attributesAsEncoded;	// 28 = 0x1c
}
+ (void)initialize;	// 0x347b1a41
- (id)initWithCoder:(id)coder;	// 0x347b21c9
- (id)initWithValues:(id *)values objectID:(id)anId;	// 0x347b1a01
- (void)_doAttributeDecoding;	// 0x347b1fad
- (const id *)attributeValues;	// 0x347b1d3d
- (void)dealloc;	// 0x347b1d75
- (void)encodeWithCoder:(id)coder;	// 0x347b1e55
- (id)valueForKey:(id)key;	// 0x347b1a5d
@end
