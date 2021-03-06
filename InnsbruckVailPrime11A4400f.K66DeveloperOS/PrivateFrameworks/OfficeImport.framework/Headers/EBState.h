/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import </libobjc.A.h>

@class EDResources, EDWorkbook, CPTracing;
@protocol OCCancelDelegate;

@interface EBState : NSObject {
	XlLinkTable *mXlLinkTable;	// 4 = 0x4
	XlNameTable *mXlNameTable;	// 8 = 0x8
	ChVector<OcText> *mSheetNames;	// 12 = 0xc
	XlFormulaProcessor *mXlFormulaProcessor;	// 16 = 0x10
	EDWorkbook *mWorkbook;	// 20 = 0x14
	EDResources *mResources;	// 24 = 0x18
	id<OCCancelDelegate> mCancelDelegate;	// 28 = 0x1c
	CPTracing *mTracing;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x318060b5; @synthesize=mCancelDelegate
@property(retain) id resources;	// G=0x3178cfb5; S=0x3178ac19; converted property
@property(retain) id workbook;	// G=0x317952dd; S=0x3178ac09; converted property
- (id)initWithCancelDelegate:(id)cancelDelegate tracing:(id)tracing;	// 0x31788f6d
// declared property getter: - (id)cancelDelegate;	// 0x318060b5
- (void)dealloc;	// 0x317a46f5
- (BOOL)isCancelled;	// 0x317950b1
// converted property getter: - (id)resources;	// 0x3178cfb5
// converted property setter: - (void)setResources:(id)resources;	// 0x3178ac19
// converted property setter: - (void)setWorkbook:(id)workbook;	// 0x3178ac09
- (ChVector<OcText> *)sheetNames;	// 0x318c4999
- (id)tracing;	// 0x317968ed
// converted property getter: - (id)workbook;	// 0x317952dd
- (XlFormulaProcessor *)xlFormulaProcessor;	// 0x31799629
- (XlLinkTable *)xlLinkTable;	// 0x31794589
- (XlNameTable *)xlNameTable;	// 0x3179470d
@end

