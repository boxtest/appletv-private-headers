/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTextBodyProperties, OADShapeProperties, OADTextListStyle;

@interface OADDefaultProperties : NSObject {
	OADShapeProperties *mShapeProperties;	// 4 = 0x4
	OADTextBodyProperties *mTextBodyProperties;	// 8 = 0x8
	OADTextListStyle *mTextListStyle;	// 12 = 0xc
}
@property(retain) id shapeProperties;	// G=0x378bf3b9; S=0x378c2675; converted property
@property(retain) id textBodyProperties;	// G=0x379ff915; S=0x37af975d; converted property
@property(retain) id textListStyle;	// G=0x378c27d9; S=0x378c27e9; converted property
- (id)init;	// 0x378bd901
- (id)initWithDefaults;	// 0x37af969d
- (void)dealloc;	// 0x3792e2a1
// converted property setter: - (void)setShapeProperties:(id)properties;	// 0x378c2675
// converted property setter: - (void)setTextBodyProperties:(id)properties;	// 0x37af975d
// converted property setter: - (void)setTextListStyle:(id)style;	// 0x378c27e9
// converted property getter: - (id)shapeProperties;	// 0x378bf3b9
// converted property getter: - (id)textBodyProperties;	// 0x379ff915
// converted property getter: - (id)textListStyle;	// 0x378c27d9
@end
