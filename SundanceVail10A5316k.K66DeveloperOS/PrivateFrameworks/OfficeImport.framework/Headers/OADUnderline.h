/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADFill, OADStroke;

__attribute__((visibility("hidden")))
@interface OADUnderline : NSObject {
@private
	OADStroke *mStroke;	// 4 = 0x4
	OADFill *mFill;	// 8 = 0x8
	unsigned char mType;	// 12 = 0xc
	unsigned mIsUsingTextFill : 1;	// 13 = 0xd
	unsigned mIsUsingTextStroke : 1;	// 13 = 0xd
}
@property(retain) id fill;	// G=0x31073111; S=0x3124b749; converted property
@property(assign) BOOL isUsingTextFill;	// G=0x3124b785; S=0x31018471; converted property
@property(assign) BOOL isUsingTextStroke;	// G=0x3124b79d; S=0x31018491; converted property
@property(retain) id stroke;	// G=0x3124b6fd; S=0x3124b70d; converted property
@property(assign) int type;	// G=0x3108060d; S=0x310184b5; converted property
- (id)initWithStroke:(id)stroke fill:(id)fill type:(int)type;	// 0x31007b61
- (void)dealloc;	// 0x310184c9
// converted property getter: - (id)fill;	// 0x31073111
- (unsigned)hash;	// 0x3124b7b1
- (BOOL)isEqual:(id)equal;	// 0x31072fc5
// converted property getter: - (BOOL)isUsingTextFill;	// 0x3124b785
// converted property getter: - (BOOL)isUsingTextStroke;	// 0x3124b79d
// converted property setter: - (void)setFill:(id)fill;	// 0x3124b749
// converted property setter: - (void)setIsUsingTextFill:(BOOL)fill;	// 0x31018471
// converted property setter: - (void)setIsUsingTextStroke:(BOOL)stroke;	// 0x31018491
// converted property setter: - (void)setStroke:(id)stroke;	// 0x3124b70d
// converted property setter: - (void)setType:(int)type;	// 0x310184b5
// converted property getter: - (id)stroke;	// 0x3124b6fd
// converted property getter: - (int)type;	// 0x3108060d
@end

