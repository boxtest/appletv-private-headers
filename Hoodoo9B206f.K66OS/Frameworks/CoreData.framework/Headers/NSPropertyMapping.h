/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSExpression, NSDictionary, NSArray, NSString;

@interface NSPropertyMapping : NSObject {
@private
	void *_reserved;	// 4 = 0x4
	void *_reserved1;	// 8 = 0x8
	NSArray *_propertyTransforms;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	NSExpression *_valueExpression;	// 20 = 0x14
	NSDictionary *_userInfo;	// 24 = 0x18
	propertyMappingFlags _propertyMappingFlags;	// 28 = 0x1c
}
@property(retain) NSString *name;	// G=0x362d05ad; S=0x362d083d; converted property
@property(retain) NSDictionary *userInfo;	// G=0x362d05cd; S=0x362d08e5; converted property
@property(retain) NSExpression *valueExpression;	// G=0x362d05bd; S=0x362d0891; converted property
+ (void)initialize;	// 0x362d0939
- (id)init;	// 0x362d0609
- (id)initWithCoder:(id)coder;	// 0x362d0b71
- (id)initWithName:(id)name valueExpression:(id)expression;	// 0x362d0955
- (void)_createCachesAndOptimizeState;	// 0x362d05f5
- (id)_initWithDestinationName:(id)destinationName valueExpression:(id)expression;	// 0x362d0c89
- (id)_propertyTransforms;	// 0x362d05f9
- (void)_setIsEditable:(BOOL)editable;	// 0x362d0d2d
- (void)_setPropertyTransforms:(id)transforms;	// 0x362d0965
- (void)_throwIfNotEditable;	// 0x362d0dc1
- (id)copyWithZone:(NSZone *)zone;	// 0x362d06e1
- (void)dealloc;	// 0x362d09b9
- (id)description;	// 0x362d07a9
- (void)encodeWithCoder:(id)coder;	// 0x362d061d
- (BOOL)isEditable;	// 0x362d05dd
- (BOOL)isEqual:(id)equal;	// 0x362d0a65
// converted property getter: - (id)name;	// 0x362d05ad
// converted property setter: - (void)setName:(id)name;	// 0x362d083d
// converted property setter: - (void)setUserInfo:(id)info;	// 0x362d08e5
// converted property setter: - (void)setValueExpression:(id)expression;	// 0x362d0891
// converted property getter: - (id)userInfo;	// 0x362d05cd
// converted property getter: - (id)valueExpression;	// 0x362d05bd
@end

