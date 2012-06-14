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
- (id)initWithText:(id)text;	// 0x34cb0335
- (id)initWithText:(id)text string:(id)string;	// 0x34e0bf81
- (id)addAnnotation:(int)annotation;	// 0x34e0be69
- (id)addBookmark;	// 0x34d10bed
- (id)addBookmark:(id)bookmark type:(int)type;	// 0x34ccf021
- (id)addCharacterRun;	// 0x34cb1ad5
- (id)addDateTime:(id)time;	// 0x34e0bdf9
- (id)addEndnote;	// 0x34d537d9
- (id)addFieldMarker;	// 0x34cb94d5
- (id)addFieldMarker:(int)marker;	// 0x34d161f1
- (id)addFootnote;	// 0x34ccf789
- (void)addRun:(id)run;	// 0x34cbabc5
- (id)addSpecialCharacter;	// 0x34cc0181
- (id)addSymbol;	// 0x34d365f5
- (int)blockType;	// 0x34c10581
- (int)characterCount;	// 0x34e0bc4d
- (void)clearProperties;	// 0x34e0bf55
- (void)clearRuns;	// 0x34e0bed9
- (void)dealloc;	// 0x34c20c01
- (void)insertRun:(id)run atIndex:(unsigned)index;	// 0x34e0bf29
- (BOOL)isContinuationOf:(id)of;	// 0x34cc16bd
- (BOOL)isEmpty;	// 0x34e0bcf1
- (BOOL)isTextFrame;	// 0x34c10585
- (id)newRunIterator;	// 0x34e0bd61
- (id)properties;	// 0x34c10661
- (void)removeLastCharacter:(unsigned short)character;	// 0x34cb2491
- (void)removeRun:(id)run;	// 0x34e0bf05
- (id)runAt:(int)at;	// 0x34c0f811
- (int)runCount;	// 0x34c0fb3d
- (id)runIterator;	// 0x34e0bda5
- (id)runs;	// 0x34e0bc3d
@end
