/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <NSObject.h> // Unknown library

@class EDResources, EDRunsCollection;

@interface CHDDefaultTextProperty : NSObject <EDKeyedObject> {
	EDResources *mResources;	// 4 = 0x4
	int mDefaultTextType;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	EDRunsCollection *mRuns;	// 16 = 0x10
	int mLabelPosition;	// 20 = 0x14
	bool mShowCategoryLabel;	// 24 = 0x18
	bool mShowValueLabel;	// 25 = 0x19
	bool mShowPercentageLabel;	// 26 = 0x1a
	bool mShowSeriesLabel;	// 27 = 0x1b
}
@property(retain) id contentFormat;	// G=0x37a98d6d; S=0x37a98db5; converted property
@property(assign) unsigned contentFormatId;	// G=0x37a98ea1; S=0x37a14159; converted property
@property(assign) int defaultTextType;	// G=0x37a98d5d; S=0x37a14169; converted property
@property(assign) bool isShowCategoryLabel;	// G=0x37a98e51; S=0x37a14189; converted property
@property(assign) bool isShowPercentageLabel;	// G=0x37a98e79; S=0x37a141a9; converted property
@property(assign) bool isShowSeriesLabel;	// G=0x37a98e8d; S=0x37a141b9; converted property
@property(assign) bool isShowValueLabel;	// G=0x37a98e65; S=0x37a14199; converted property
@property(assign) int labelPosition;	// G=0x37a98e41; S=0x37a14179; converted property
@property(retain) id runs;	// G=0x37a53379; S=0x37a14115; converted property
+ (id)defaultTextPropertyWithResources:(id)resources;	// 0x37a13e29
- (id)initWithResources:(id)resources;	// 0x37a13e75
// converted property getter: - (id)contentFormat;	// 0x37a98d6d
// converted property getter: - (unsigned)contentFormatId;	// 0x37a98ea1
- (void)dealloc;	// 0x37a296ad
// converted property getter: - (int)defaultTextType;	// 0x37a98d5d
// converted property getter: - (bool)isShowCategoryLabel;	// 0x37a98e51
// converted property getter: - (bool)isShowPercentageLabel;	// 0x37a98e79
// converted property getter: - (bool)isShowSeriesLabel;	// 0x37a98e8d
// converted property getter: - (bool)isShowValueLabel;	// 0x37a98e65
- (int)key;	// 0x37a141c9
// converted property getter: - (int)labelPosition;	// 0x37a98e41
// converted property getter: - (id)runs;	// 0x37a53379
// converted property setter: - (void)setContentFormat:(id)format;	// 0x37a98db5
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x37a14159
// converted property setter: - (void)setDefaultTextType:(int)type;	// 0x37a14169
// converted property setter: - (void)setIsShowCategoryLabel:(bool)label;	// 0x37a14189
// converted property setter: - (void)setIsShowPercentageLabel:(bool)label;	// 0x37a141a9
// converted property setter: - (void)setIsShowSeriesLabel:(bool)label;	// 0x37a141b9
// converted property setter: - (void)setIsShowValueLabel:(bool)label;	// 0x37a14199
// converted property setter: - (void)setLabelPosition:(int)position;	// 0x37a14179
// converted property setter: - (void)setRuns:(id)runs;	// 0x37a14115
@end
