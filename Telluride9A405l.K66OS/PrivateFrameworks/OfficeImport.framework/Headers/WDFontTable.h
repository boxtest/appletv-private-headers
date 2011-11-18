/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, SFUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface WDFontTable : NSObject {
@private
	SFUNoCopyDictionary *mFontTable;	// 4 = 0x4
	NSMutableArray *mFontsInOrderOfInsertion;	// 8 = 0x8
}
- (id)init;	// 0x30cfdcf5
- (void)clear;	// 0x30d0497d
- (int)count;	// 0x30e6ef79
- (id)createFontWithName:(id)name;	// 0x30cfdead
- (void)dealloc;	// 0x30c84725
- (id)fontWithName:(id)name;	// 0x30cfe8cd
- (id)fontWithName:(id)name create:(BOOL)create;	// 0x30cfde61
- (id)fonts;	// 0x30e6ef59
@end

