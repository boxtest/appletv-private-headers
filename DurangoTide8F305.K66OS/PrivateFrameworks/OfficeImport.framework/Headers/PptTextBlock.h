/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSMutableArray, NSMutableString;

__attribute__((visibility("hidden")))
@interface PptTextBlock : NSObject {
@private
	PptTextHeaderAtom *mTextHeader;	// 4 = 0x4
	NSMutableString *mText;	// 8 = 0x8
	PptStyleTextPropertyAtom *mStyleText;	// 12 = 0xc
	NSMutableArray *mMetaCharacterFields;	// 16 = 0x10
	NSMutableArray *mBookmarks;	// 20 = 0x14
	NSMutableArray *mHyperlinks;	// 24 = 0x18
	PptTextRulerAtom *mTextRuler;	// 28 = 0x1c
}
- (id)init;	// 0x34440141
- (id)bookmarks;	// 0x346371c5
- (PptCharRun *)characterRunAtIndex:(int)index;	// 0x34440a99
- (int)characterRunCount;	// 0x34440a85
- (void)dealloc;	// 0x34443005
- (id)hyperlinks;	// 0x34440ac9
- (id)metaCharacterFields;	// 0x34440ad9
- (PptParaRun *)paragraphRunAtIndex:(int)index;	// 0x34440a55
- (int)paragraphRunCount;	// 0x34440a41
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)hyperlinks;	// 0x3444050d
- (void)readString:(id)string;	// 0x34440345
- (void)readStyles:(id)styles;	// 0x344404a5
- (void)readTextBlock:(id)block;	// 0x3444023d
- (id)text;	// 0x3444075d
- (unsigned long)textIndex;	// 0x346371d5
- (PptTextRulerAtom *)textRuler;	// 0x3444073d
- (int)textType;	// 0x3444074d
- (void)writeTextBlock:(id)block;	// 0x346371c1
@end
