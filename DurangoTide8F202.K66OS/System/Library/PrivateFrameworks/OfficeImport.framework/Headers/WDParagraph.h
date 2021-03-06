/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDBlock.h"

@class WDParagraphProperties, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDParagraph : WDBlock {
@private
	WDParagraphProperties *mProperties;	// 8 = 0x8
	NSMutableArray *mRuns;	// 12 = 0xc
}
- (id)initWithText:(id)text;	// 0x319b5fb5
- (id)initWithText:(id)text string:(id)string;	// 0x31b00c59
- (id)addAnnotation:(int)annotation;	// 0x31b00b65
- (id)addBookmark;	// 0x31a39749
- (id)addBookmark:(id)bookmark type:(int)type;	// 0x319fe129
- (id)addCharacterRun;	// 0x319b7455
- (id)addDateTime:(id)time;	// 0x31b00b01
- (id)addEndnote;	// 0x31a7692d
- (id)addFieldMarker;	// 0x319b9609
- (id)addFieldMarker:(int)marker;	// 0x31a3e675
- (id)addFootnote;	// 0x319ff14d
- (void)addRun:(id)run;	// 0x319ef8cd
- (id)addSpecialCharacter;	// 0x319efe91
- (id)addSymbol;	// 0x31a59849
- (int)blockType;	// 0x3198a1f1
- (int)characterCount;	// 0x31b00965
- (void)clearProperties;	// 0x31b00c31
- (void)clearRuns;	// 0x31b00bc9
- (void)dealloc;	// 0x31995569
- (void)insertRun:(id)run atIndex:(unsigned)index;	// 0x31b00c11
- (BOOL)isContinuationOf:(id)of;	// 0x319bc375
- (BOOL)isEmpty;	// 0x31b00a09
- (BOOL)isTextFrame;	// 0x3198a1f5
- (id)newRunIterator;	// 0x31b00a7d
- (id)properties;	// 0x3198a2b5
- (void)removeLastCharacter:(unsigned short)character;	// 0x319b7cc9
- (void)removeRun:(id)run;	// 0x31b00bf1
- (id)runAt:(int)at;	// 0x31989dfd
- (int)runCount;	// 0x3198b99d
- (id)runIterator;	// 0x31b00ab9
- (id)runs;	// 0x31b00955
@end

