/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class NSString, NSArray;

@interface UIKBKeylistReference : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	id m_value;	// 8 = 0x8
	NSArray *m_nameElements;	// 12 = 0xc
	int m_startKeyIndex;	// 16 = 0x10
	int m_endKeyIndex;	// 20 = 0x14
	unsigned m_flags;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) int endKeyIndex;	// G=0x353b87e9; @synthesize=m_endKeyIndex
@property(readonly, assign, nonatomic) unsigned flags;	// G=0x353b87b9; @synthesize=m_flags
@property(readonly, assign, nonatomic) BOOL isAttributesReference;	// G=0x353b8689; 
@property(readonly, assign, nonatomic) BOOL isGeometryReference;	// G=0x353b8675; 
@property(readonly, assign, nonatomic) BOOL isKeyIndexRangeReference;	// G=0x353b8661; 
@property(readonly, assign, nonatomic) BOOL isKeyIndexReference;	// G=0x353b864d; 
@property(readonly, assign, nonatomic) BOOL isKeylistReference;	// G=0x353b8611; 
@property(readonly, assign, nonatomic) BOOL isKeysReference;	// G=0x353b8625; 
@property(readonly, assign, nonatomic) BOOL isKeysetReference;	// G=0x353b85fd; 
@property(readonly, assign, nonatomic) BOOL isNamedKeyReference;	// G=0x353b8639; 
@property(readonly, assign, nonatomic) NSString *keyName;	// G=0x353b85b5; 
@property(readonly, assign, nonatomic) NSString *keylistName;	// G=0x353b856d; 
@property(retain, nonatomic) NSString *name;	// G=0x353b8751; S=0x353b8761; @synthesize=m_name
@property(readonly, assign, nonatomic) NSArray *nameElements;	// G=0x353b87c9; @synthesize=m_nameElements
@property(readonly, assign, nonatomic) int startKeyIndex;	// G=0x353b87d9; @synthesize=m_startKeyIndex
@property(retain, nonatomic) id value;	// G=0x353b8785; S=0x353b8795; @synthesize=m_value
+ (id)referenceWithName:(id)name value:(id)value flags:(unsigned)flags;	// 0x353b7e29
- (id)initWithCoder:(id)coder;	// 0x353b80ed
- (id)initWithName:(id)name value:(id)value flags:(unsigned)flags;	// 0x353b7e81
- (id)copyWithZone:(NSZone *)zone;	// 0x353b82f1
- (void)dealloc;	// 0x353b8375
- (id)description;	// 0x353b83e9
- (void)encodeWithCoder:(id)coder;	// 0x353b8201
- (unsigned)endIndexForListCount:(unsigned)listCount;	// 0x353b86c1
// declared property getter: - (int)endKeyIndex;	// 0x353b87e9
// declared property getter: - (unsigned)flags;	// 0x353b87b9
// declared property getter: - (BOOL)isAttributesReference;	// 0x353b8689
// declared property getter: - (BOOL)isGeometryReference;	// 0x353b8675
// declared property getter: - (BOOL)isKeyIndexRangeReference;	// 0x353b8661
// declared property getter: - (BOOL)isKeyIndexReference;	// 0x353b864d
// declared property getter: - (BOOL)isKeylistReference;	// 0x353b8611
// declared property getter: - (BOOL)isKeysReference;	// 0x353b8625
// declared property getter: - (BOOL)isKeysetReference;	// 0x353b85fd
// declared property getter: - (BOOL)isNamedKeyReference;	// 0x353b8639
// declared property getter: - (id)keyName;	// 0x353b85b5
// declared property getter: - (id)keylistName;	// 0x353b856d
// declared property getter: - (id)name;	// 0x353b8751
// declared property getter: - (id)nameElements;	// 0x353b87c9
- (void)setFlags:(unsigned)flags setStartKeyIndex:(int)index setEndKeyIndex:(int)index3;	// 0x353b86e1
// declared property setter: - (void)setName:(id)name;	// 0x353b8761
- (void)setNameElements:(id)elements;	// 0x353b8711
// declared property setter: - (void)setValue:(id)value;	// 0x353b8795
- (unsigned)startIndexForListCount:(unsigned)listCount;	// 0x353b86a1
// declared property getter: - (int)startKeyIndex;	// 0x353b87d9
// declared property getter: - (id)value;	// 0x353b8785
@end
