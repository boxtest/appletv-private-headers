/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapperRoot.h"
#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class CMArchiveManager, WDDocument, NSString;

@interface WMDocumentMapper : CMMapper <CMMapperRoot> {
	CMArchiveManager *mArchiver;	// 8 = 0x8
	WDDocument *wDom;	// 12 = 0xc
	NSString *mFileName;	// 16 = 0x10
}
@property(retain) id fileName;	// G=0x349a2eb9; S=0x348f7151; converted property
- (id)initWithWDom:(id)wdom archiver:(id)archiver;	// 0x348f70d1
- (id)archiver;	// 0x348f8a35
- (id)blipAtIndex:(unsigned)index;	// 0x348fc581
- (float)bottomMargin;	// 0x348f87d1
- (CGSize)contentSizeForDevice;	// 0x348f7e3d
- (void)dealloc;	// 0x34904b89
- (int)defaultTabWidth;	// 0x34902f85
- (id)documentTitle;	// 0x348f8915
// converted property getter: - (id)fileName;	// 0x349a2eb9
- (BOOL)hasSessionBreakAtIndex:(unsigned)index;	// 0x348f8b9d
- (float)headerMargin;	// 0x348f8625
- (float)leftMargin;	// 0x348f8259
- (void)mapDefaultCssStylesAt:(id)at;	// 0x348f8a45
- (void)mapWithState:(id)state;	// 0x348f7195
- (CGSize)pageSizeForDevice;	// 0x348f7ad9
- (float)rightMargin;	// 0x348f839d
// converted property setter: - (void)setFileName:(id)name;	// 0x348f7151
- (id)styleMatrix;	// 0x349d4ecd
- (float)topMargin;	// 0x348f84e1
@end
