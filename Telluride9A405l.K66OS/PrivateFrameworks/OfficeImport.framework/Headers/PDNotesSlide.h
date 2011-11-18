/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideChild.h"

@class PDNotesMaster;

__attribute__((visibility("hidden")))
@interface PDNotesSlide : PDSlideChild {
@private
	PDNotesMaster *mNotesMaster;	// 44 = 0x2c
}
@property(retain) id notesMaster;	// G=0x30da7c01; S=0x30da7b39; converted property
- (id)init;	// 0x30da7b0d
- (void)dealloc;	// 0x30da7d95
- (void)doneWithContent;	// 0x30dfb75d
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x30da7cb1
// converted property getter: - (id)notesMaster;	// 0x30da7c01
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x30da7c69
- (id)parentSlideBase;	// 0x30da7b7d
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x30da7c11
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x30da7b8d
// converted property setter: - (void)setNotesMaster:(id)master;	// 0x30da7b39
@end

