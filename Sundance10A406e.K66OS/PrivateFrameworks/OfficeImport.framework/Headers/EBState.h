/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDWorkbook, EDResources, CPTracing;
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
@property(readonly, assign, nonatomic) id<OCCancelDelegate> cancelDelegate;	// G=0x35025d65; @synthesize=mCancelDelegate
@property(retain) id resources;	// G=0x34eee205; S=0x34eebf79; converted property
@property(retain) id workbook;	// G=0x34ef9929; S=0x34eebf69; converted property
- (id)initWithCancelDelegate:(id)cancelDelegate tracing:(id)tracing;	// 0x34eea109
// declared property getter: - (id)cancelDelegate;	// 0x35025d65
- (void)dealloc;	// 0x34f0e7e5
- (BOOL)isCancelled;	// 0x34efbff5
// converted property getter: - (id)resources;	// 0x34eee205
// converted property setter: - (void)setResources:(id)resources;	// 0x34eebf79
// converted property setter: - (void)setWorkbook:(id)workbook;	// 0x34eebf69
- (ChVector<OcText> *)sheetNames;	// 0x35064ef1
- (id)tracing;	// 0x34efd85d
// converted property getter: - (id)workbook;	// 0x34ef9929
- (XlFormulaProcessor *)xlFormulaProcessor;	// 0x34ef7615
- (XlLinkTable *)xlLinkTable;	// 0x34ef6e81
- (XlNameTable *)xlNameTable;	// 0x34ef7245
@end
