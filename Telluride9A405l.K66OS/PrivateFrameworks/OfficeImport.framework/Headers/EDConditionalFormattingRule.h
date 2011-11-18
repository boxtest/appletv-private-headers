/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString, EDResources;

__attribute__((visibility("hidden")))
@interface EDConditionalFormattingRule : NSObject {
@private
	EDResources *mResources;	// 4 = 0x4
	int mType;	// 8 = 0x8
	int mOperator;	// 12 = 0xc
	NSMutableArray *mFormulas;	// 16 = 0x10
	unsigned mDifferentialStyleIndex;	// 20 = 0x14
	bool mStopIfTrue;	// 24 = 0x18
	int mPriority;	// 28 = 0x1c
	bool mAboveAverage;	// 32 = 0x20
	bool mBottom;	// 33 = 0x21
	bool mEqualAverage;	// 34 = 0x22
	bool mPercent;	// 35 = 0x23
	unsigned mRank;	// 36 = 0x24
	int mStdDev;	// 40 = 0x28
	NSString *mText;	// 44 = 0x2c
	int mTimePeriod;	// 48 = 0x30
}
@property(assign) bool aboveAverage;	// G=0x30e2f6cd; S=0x30e2f6dd; converted property
@property(assign) bool bottom;	// G=0x30e2f6ed; S=0x30e2f6fd; converted property
@property(retain) id differentialStyle;	// G=0x30e2f871; S=0x30cf0c61; converted property
@property(assign) unsigned differentialStyleIndex;	// G=0x30e2f7bd; S=0x30e2f7cd; converted property
@property(assign) bool equalAverage;	// G=0x30e2f70d; S=0x30e2f71d; converted property
@property(assign) int operatorEnum;	// G=0x30e2f68d; S=0x30cee471; converted property
@property(assign) bool percent;	// G=0x30e2f72d; S=0x30e2f73d; converted property
@property(assign) int priority;	// G=0x30e2f6ad; S=0x30e2f6bd; converted property
@property(assign) unsigned rank;	// G=0x30e2f74d; S=0x30e2f75d; converted property
@property(assign) int stdDev;	// G=0x30e2f76d; S=0x30e2f77d; converted property
@property(assign) bool stopIfTrue;	// G=0x30e2f69d; S=0x30cee411; converted property
@property(retain) id text;	// G=0x30e2f78d; S=0x30e2f829; converted property
@property(assign) int timePeriod;	// G=0x30e2f79d; S=0x30e2f7ad; converted property
@property(assign) int type;	// G=0x30e2f67d; S=0x30cee42d; converted property
+ (id)conditionalFormattingRuleWithResources:(id)resources;	// 0x30e2f7dd
- (id)initWithResources:(id)resources;	// 0x30cee2d5
// converted property getter: - (bool)aboveAverage;	// 0x30e2f6cd
- (void)addFormula:(id)formula worksheet:(id)worksheet;	// 0x30cf0705
// converted property getter: - (bool)bottom;	// 0x30e2f6ed
- (int)compareToOtherRuleUsingPriority:(id)otherRuleUsingPriority;	// 0x30e2f91d
- (void)dealloc;	// 0x30cf38c1
// converted property getter: - (id)differentialStyle;	// 0x30e2f871
// converted property getter: - (unsigned)differentialStyleIndex;	// 0x30e2f7bd
// converted property getter: - (bool)equalAverage;	// 0x30e2f70d
- (id)formulaAtIndex:(unsigned)index;	// 0x30e2f8b9
- (unsigned)formulaCount;	// 0x30e2f8fd
// converted property getter: - (int)operatorEnum;	// 0x30e2f68d
// converted property getter: - (bool)percent;	// 0x30e2f72d
// converted property getter: - (int)priority;	// 0x30e2f6ad
// converted property getter: - (unsigned)rank;	// 0x30e2f74d
// converted property setter: - (void)setAboveAverage:(bool)average;	// 0x30e2f6dd
// converted property setter: - (void)setBottom:(bool)bottom;	// 0x30e2f6fd
// converted property setter: - (void)setDifferentialStyle:(id)style;	// 0x30cf0c61
// converted property setter: - (void)setDifferentialStyleIndex:(unsigned)index;	// 0x30e2f7cd
// converted property setter: - (void)setEqualAverage:(bool)average;	// 0x30e2f71d
// converted property setter: - (void)setOperatorEnum:(int)anEnum;	// 0x30cee471
// converted property setter: - (void)setPercent:(bool)percent;	// 0x30e2f73d
// converted property setter: - (void)setPriority:(int)priority;	// 0x30e2f6bd
// converted property setter: - (void)setRank:(unsigned)rank;	// 0x30e2f75d
// converted property setter: - (void)setStdDev:(int)dev;	// 0x30e2f77d
// converted property setter: - (void)setStopIfTrue:(bool)aTrue;	// 0x30cee411
// converted property setter: - (void)setText:(id)text;	// 0x30e2f829
// converted property setter: - (void)setTimePeriod:(int)period;	// 0x30e2f7ad
// converted property setter: - (void)setType:(int)type;	// 0x30cee42d
// converted property getter: - (int)stdDev;	// 0x30e2f76d
// converted property getter: - (bool)stopIfTrue;	// 0x30e2f69d
// converted property getter: - (id)text;	// 0x30e2f78d
// converted property getter: - (int)timePeriod;	// 0x30e2f79d
// converted property getter: - (int)type;	// 0x30e2f67d
@end

