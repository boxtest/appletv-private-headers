/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapperRoot.h"
#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class EDWorkbook, CMArchiveManager, NSMutableArray, OIXMLDocument, OIXMLElement, NSString;

@interface EMWorkbookMapper : CMMapper <CMMapperRoot> {
	unsigned mRealSheetCount;	// 8 = 0x8
	int mWidth;	// 12 = 0xc
	int mHeight;	// 16 = 0x10
	EDWorkbook *edWorkbook;	// 20 = 0x14
	NSMutableArray *mWorksheetUrls;	// 24 = 0x18
	NSMutableArray *mWorksheetNames;	// 28 = 0x1c
	NSMutableArray *mWorksheetGuids;	// 32 = 0x20
	NSString *mResourceUrlPrefix;	// 36 = 0x24
	NSString *mResourceUrlProtocol;	// 40 = 0x28
	NSString *mStyleSheetGuid;	// 44 = 0x2c
	CMArchiveManager *mArchiver;	// 48 = 0x30
	NSString *mFileName;	// 52 = 0x34
	unsigned mSheetIndex;	// 56 = 0x38
	bool mIsFirstMappedSheet;	// 60 = 0x3c
	bool mIsFrameset;	// 61 = 0x3d
	OIXMLDocument *mXhtmlDoc;	// 64 = 0x40
	OIXMLElement *mBodyElement;	// 68 = 0x44
	OIXMLDocument *mTabBarDoc;	// 72 = 0x48
	NSString *mTabBarURL;	// 76 = 0x4c
	NSMutableArray *mSheetURLs;	// 80 = 0x50
	float mTabPosition;	// 84 = 0x54
	unsigned mNumberOfMappedSheets;	// 88 = 0x58
	BOOL mHasPushedHeader;	// 92 = 0x5c
	BOOL mHasPushedFirstSheet;	// 93 = 0x5d
	BOOL mLoadingMessageVisible;	// 94 = 0x5e
}
@property(retain) id fileName;	// G=0x349e6a85; S=0x348a4161; converted property
+ (id)baseDate;	// 0x34910879
+ (id)borderStyleCache;	// 0x348c647d
+ (id)borderWidthCache;	// 0x348c6759
+ (id)cssStyleCache;	// 0x349e6a99
+ (void)setBaseDate1904:(BOOL)a1904;	// 0x348a4011
- (id)initWithEDWorkbook:(id)edworkbook archiver:(id)archiver;	// 0x348a3d99
- (id)_copyStringForSheet:(id)sheet atIndex:(unsigned)index withState:(id)state andMapper:(id)mapper;	// 0x349e75b9
- (id)_frontPageByCopyingMainPage;	// 0x349e6bb5
- (id)_mainPageBack;	// 0x348cfbc5
- (void)_pushTabForSheet:(id)sheet atIndex:(unsigned)index;	// 0x349e7319
- (id)archiver;	// 0x348bd88d
- (id)blipAtIndex:(unsigned)index;	// 0x348c8e65
- (id)copySheetMapperWithEdSheet:(id)edSheet;	// 0x349e77b9
- (void)dealloc;	// 0x348c2e69
- (id)documentTitle;	// 0x348c0dd5
// converted property getter: - (id)fileName;	// 0x349e6a85
- (void)finishMappingWithState:(id)state;	// 0x348c0fcd
- (BOOL)hasMultipleSheets;	// 0x348a4299
- (bool)isMultiPage;	// 0x349e6ab5
- (void)mapBodyStyleAt:(id)at;	// 0x348ba411
- (void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;	// 0x348b8271
- (CGSize)pageSizeForDevice;	// 0x349e6b3d
// converted property setter: - (void)setFileName:(id)name;	// 0x348a4161
- (void)startMappingWithState:(id)state;	// 0x348a41a9
- (id)styleMatrix;	// 0x349e6ae9
- (id)workbook;	// 0x348b96a9
@end
