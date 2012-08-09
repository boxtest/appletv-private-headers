/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface UIKBKeylistReference : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	id m_value;	// 8 = 0x8
	NSArray *m_nameElements;	// 12 = 0xc
	int m_startKeyIndex;	// 16 = 0x10
	int m_endKeyIndex;	// 20 = 0x14
	unsigned m_flags;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) int endKeyIndex;	// G=0x3052fc49; @synthesize=m_endKeyIndex
@property(readonly, assign, nonatomic) unsigned flags;	// G=0x3052fc19; @synthesize=m_flags
@property(readonly, assign, nonatomic) BOOL isAttributesReference;	// G=0x3052fb15; 
@property(readonly, assign, nonatomic) BOOL isGeometryReference;	// G=0x3052fb01; 
@property(readonly, assign, nonatomic) BOOL isKeyIndexRangeReference;	// G=0x3052faed; 
@property(readonly, assign, nonatomic) BOOL isKeyIndexReference;	// G=0x3052fad9; 
@property(readonly, assign, nonatomic) BOOL isKeylistReference;	// G=0x3052fa9d; 
@property(readonly, assign, nonatomic) BOOL isKeysReference;	// G=0x3052fab1; 
@property(readonly, assign, nonatomic) BOOL isKeysetReference;	// G=0x3052fa89; 
@property(readonly, assign, nonatomic) BOOL isNamedKeyReference;	// G=0x3052fac5; 
@property(readonly, assign, nonatomic) NSString *keyName;	// G=0x3052fa41; 
@property(readonly, assign, nonatomic) NSString *keylistName;	// G=0x3052f9f9; 
@property(retain, nonatomic) NSString *name;	// G=0x3052fbd9; S=0x3052fbe9; @synthesize=m_name
@property(readonly, assign, nonatomic) NSArray *nameElements;	// G=0x3052fc29; @synthesize=m_nameElements
@property(readonly, assign, nonatomic) int startKeyIndex;	// G=0x3052fc39; @synthesize=m_startKeyIndex
@property(retain, nonatomic) id value;	// G=0x3052fbf9; S=0x3052fc09; @synthesize=m_value
+ (id)referenceWithName:(id)name value:(id)value flags:(unsigned)flags;	// 0x3052f2b9
- (id)initWithCoder:(id)coder;	// 0x3052f571
- (id)initWithName:(id)name value:(id)value flags:(unsigned)flags;	// 0x3052f311
- (id)copyWithZone:(NSZone *)zone;	// 0x3052f779
- (void)dealloc;	// 0x3052f7fd
- (id)description;	// 0x3052f875
- (void)encodeWithCoder:(id)coder;	// 0x3052f689
- (unsigned)endIndexForListCount:(unsigned)listCount;	// 0x3052fb4d
// declared property getter: - (int)endKeyIndex;	// 0x3052fc49
// declared property getter: - (unsigned)flags;	// 0x3052fc19
// declared property getter: - (BOOL)isAttributesReference;	// 0x3052fb15
// declared property getter: - (BOOL)isGeometryReference;	// 0x3052fb01
// declared property getter: - (BOOL)isKeyIndexRangeReference;	// 0x3052faed
// declared property getter: - (BOOL)isKeyIndexReference;	// 0x3052fad9
// declared property getter: - (BOOL)isKeylistReference;	// 0x3052fa9d
// declared property getter: - (BOOL)isKeysReference;	// 0x3052fab1
// declared property getter: - (BOOL)isKeysetReference;	// 0x3052fa89
// declared property getter: - (BOOL)isNamedKeyReference;	// 0x3052fac5
// declared property getter: - (id)keyName;	// 0x3052fa41
// declared property getter: - (id)keylistName;	// 0x3052f9f9
// declared property getter: - (id)name;	// 0x3052fbd9
// declared property getter: - (id)nameElements;	// 0x3052fc29
- (void)setFlags:(unsigned)flags setStartKeyIndex:(int)index setEndKeyIndex:(int)index3;	// 0x3052fb6d
// declared property setter: - (void)setName:(id)name;	// 0x3052fbe9
- (void)setNameElements:(id)elements;	// 0x3052fb9d
// declared property setter: - (void)setValue:(id)value;	// 0x3052fc09
- (unsigned)startIndexForListCount:(unsigned)listCount;	// 0x3052fb2d
// declared property getter: - (int)startKeyIndex;	// 0x3052fc39
// declared property getter: - (id)value;	// 0x3052fbf9
@end
