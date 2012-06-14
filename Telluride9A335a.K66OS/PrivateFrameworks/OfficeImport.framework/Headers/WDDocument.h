/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDocument.h"

@class NSMutableArray, WDListTable, OADBackground, WDFontTable, WDRevisionAuthorTable, WDText, NSDate, OADTheme, WDListDefinitionTable, WDStyleSheet, NSString;

__attribute__((visibility("hidden")))
@interface WDDocument : OCDDocument {
@private
	WDStyleSheet *mStyleSheet;	// 20 = 0x14
	WDFontTable *mFontTable;	// 24 = 0x18
	WDListDefinitionTable *mListDefinitionTable;	// 28 = 0x1c
	WDRevisionAuthorTable *mRevisionAuthorTable;	// 32 = 0x20
	WDListTable *mListTable;	// 36 = 0x24
	NSMutableArray *mSections;	// 40 = 0x28
	unsigned short mDefaultTabWidth;	// 44 = 0x2c
	WDText *mImageBulletText;	// 48 = 0x30
	WDText *mFootnoteSeparator;	// 52 = 0x34
	WDText *mFootnoteContinuationSeparator;	// 56 = 0x38
	WDText *mFootnoteContinuationNotice;	// 60 = 0x3c
	WDText *mEndnoteSeparator;	// 64 = 0x40
	WDText *mEndnoteContinuationSeparator;	// 68 = 0x44
	WDText *mEndnoteContinuationNotice;	// 72 = 0x48
	int mFootnoteNumberFormat;	// 76 = 0x4c
	int mEndnoteNumberFormat;	// 80 = 0x50
	int mFootnotePosition;	// 84 = 0x54
	int mEndnotePosition;	// 88 = 0x58
	int mFootnoteRestart;	// 92 = 0x5c
	int mEndnoteRestart;	// 96 = 0x60
	unsigned short mFootnoteNumberingStart;	// 100 = 0x64
	int mGutterPosition;	// 104 = 0x68
	NSString *mOleFilename;	// 108 = 0x6c
	short mZoomPercentage;	// 112 = 0x70
	NSString *mVersion;	// 116 = 0x74
	unsigned mMirrorMargins : 1;	// 120 = 0x78
	unsigned mBorderSurroundHeader : 1;	// 120 = 0x78
	unsigned mBorderSurroundFooter : 1;	// 120 = 0x78
	unsigned mAutoHyphenate : 1;	// 120 = 0x78
	unsigned mEvenAndOddHeaders : 1;	// 120 = 0x78
	unsigned mGraphicsInHeaderFooter : 1;	// 120 = 0x78
	unsigned mBookFold : 1;	// 120 = 0x78
	unsigned mShowMarkup : 1;	// 120 = 0x78
	unsigned mShowComments : 1;	// 121 = 0x79
	unsigned mTrackChanges : 1;	// 121 = 0x79
	unsigned mShowRevisionMarksOnScreen : 1;	// 121 = 0x79
	unsigned mShowInsertionsAndDeletions : 1;	// 121 = 0x79
	unsigned mShowFormatting : 1;	// 121 = 0x79
	unsigned mShowOutline : 1;	// 121 = 0x79
	NSMutableArray *mDocumentImages;	// 124 = 0x7c
	NSMutableArray *mChangeTrackingEditDates;	// 128 = 0x80
	NSMutableArray *mChangeTrackingEditAuthors;	// 132 = 0x84
	NSDate *mCreationDate;	// 136 = 0x88
	NSMutableArray *mImageBullets;	// 140 = 0x8c
	int mZIndexTotalForMainText;	// 144 = 0x90
	int mZIndexTotalForHeaderFooterText;	// 148 = 0x94
	OADBackground *mDocumentBackground;	// 152 = 0x98
	OADTheme *mTheme;	// 156 = 0x9c
}
@property(assign) BOOL autoHyphenate;	// G=0x353b1eb1; S=0x3524a27d; converted property
@property(assign) BOOL bookFold;	// G=0x353b1f69; S=0x3524a33d; converted property
@property(assign) BOOL borderSurroundFooter;	// G=0x353b1e59; S=0x3524a24d; converted property
@property(assign) BOOL borderSurroundHeader;	// G=0x353b1e3d; S=0x3524a22d; converted property
@property(retain) id creationDate;	// G=0x353b208d; S=0x353b2615; converted property
@property(assign) unsigned short defaultTabWidth;	// G=0x351c6c1d; S=0x3524a26d; converted property
@property(retain) id documentBackground;	// G=0x353b20ad; S=0x3525f6ad; converted property
@property(assign) int endnoteNumberFormat;	// G=0x353b1ef9; S=0x3524a2ed; converted property
@property(assign) int endnotePosition;	// G=0x353b1f19; S=0x3524a2cd; converted property
@property(assign) int endnoteRestart;	// G=0x353b1f39; S=0x3524a30d; converted property
@property(assign) BOOL evenAndOddHeaders;	// G=0x353b1ecd; S=0x3524a29d; converted property
@property(assign) int footnoteNumberFormat;	// G=0x353b1ee9; S=0x3524a2dd; converted property
@property(assign) unsigned short footnoteNumberingStart;	// G=0x353b1f49; S=0x3524a31d; converted property
@property(assign) int footnotePosition;	// G=0x353b1f09; S=0x3524a2bd; converted property
@property(assign) int footnoteRestart;	// G=0x353b1f29; S=0x3524a2fd; converted property
@property(assign) BOOL graphicsInHeaderFooter;	// G=0x353b1e75; S=0x353b1e91; converted property
@property(assign) int gutterPosition;	// G=0x353b1f59; S=0x3524a32d; converted property
@property(assign) BOOL mirrorMargins;	// G=0x353b1e21; S=0x3524a211; converted property
@property(retain) id oleFilename;	// G=0x352e8b8d; S=0x3524a519; converted property
@property(assign) BOOL showComments;	// G=0x353b1fc5; S=0x3524a1f5; converted property
@property(assign) BOOL showFormatting;	// G=0x353b2035; S=0x3524a1b9; converted property
@property(assign) BOOL showInsertionsAndDeletions;	// G=0x353b2019; S=0x3524a199; converted property
@property(assign) BOOL showMarkup;	// G=0x353b1fb1; S=0x3524a1d9; converted property
@property(assign) BOOL showOutline;	// G=0x353b2051; S=0x3524a36d; converted property
@property(assign) BOOL showRevisionMarksOnScreen;	// G=0x353b1ffd; S=0x3524a179; converted property
@property(assign) BOOL trackChanges;	// G=0x353b1fe1; S=0x3524a159; converted property
@property(retain) id version;	// G=0x353b1fa1; S=0x353b26e1; converted property
@property(assign) int zIndexTotalForHeaderFooterText;	// G=0x353b20cd; S=0x3525f7d9; converted property
@property(assign) int zIndexTotalForMainText;	// G=0x353b20bd; S=0x3525f7b9; converted property
@property(assign) short zoomPercentage;	// G=0x353b1f85; S=0x3524a35d; converted property
+ (int)thumbnailCutOff;	// 0x353b1e19
- (id)init;	// 0x3524198d
- (void)addChangeTrackingEditAtDate:(id)date authorIndex:(int)index;	// 0x352e3789
- (id)addImageBulletText;	// 0x35280249
- (void)addImageBullets;	// 0x353b2721
- (id)addList:(id)list;	// 0x353b284d
- (id)addListDefinition;	// 0x353b28b5
- (void)addRevisionAuthor:(id)author;	// 0x353b2655
- (id)addSection;	// 0x35256071
- (id)annotationBlockIterator;	// 0x353b2151
- (id)annotationIterator;	// 0x353b22dd
- (id)applicationName;	// 0x353b1f95
// converted property getter: - (BOOL)autoHyphenate;	// 0x353b1eb1
// converted property getter: - (BOOL)bookFold;	// 0x353b1f69
// converted property getter: - (BOOL)borderSurroundFooter;	// 0x353b1e59
// converted property getter: - (BOOL)borderSurroundHeader;	// 0x353b1e3d
- (id)changeTrackingEditAuthors;	// 0x353b207d
- (id)changeTrackingEditDates;	// 0x353b206d
// converted property getter: - (id)creationDate;	// 0x353b208d
- (void)dealloc;	// 0x351c810d
// converted property getter: - (unsigned short)defaultTabWidth;	// 0x351c6c1d
// converted property getter: - (id)documentBackground;	// 0x353b20ad
- (id)endnoteBlockIterator;	// 0x353b21d5
- (id)endnoteContinuationNotice;	// 0x3525b385
- (id)endnoteContinuationSeparator;	// 0x3525b375
- (id)endnoteIterator;	// 0x353b2361
// converted property getter: - (int)endnoteNumberFormat;	// 0x353b1ef9
// converted property getter: - (int)endnotePosition;	// 0x353b1f19
// converted property getter: - (int)endnoteRestart;	// 0x353b1f39
- (id)endnoteSeparator;	// 0x3525b365
// converted property getter: - (BOOL)evenAndOddHeaders;	// 0x353b1ecd
- (id)fontTable;	// 0x352428bd
- (id)footnoteBlockIterator;	// 0x353b2259
- (id)footnoteContinuationNotice;	// 0x3525b355
- (id)footnoteContinuationSeparator;	// 0x3525b345
- (id)footnoteIterator;	// 0x353b23e5
// converted property getter: - (int)footnoteNumberFormat;	// 0x353b1ee9
// converted property getter: - (unsigned short)footnoteNumberingStart;	// 0x353b1f49
// converted property getter: - (int)footnotePosition;	// 0x353b1f09
// converted property getter: - (int)footnoteRestart;	// 0x353b1f29
- (id)footnoteSeparator;	// 0x3525b221
// converted property getter: - (BOOL)graphicsInHeaderFooter;	// 0x353b1e75
// converted property getter: - (int)gutterPosition;	// 0x353b1f59
- (id)imageBulletParagraph;	// 0x353237a5
- (id)imageBulletText;	// 0x353b209d
- (id)imageBulletWithCharacterOffset:(int)characterOffset;	// 0x35280405
- (id)imageBullets;	// 0x35253ae5
- (BOOL)isFromBinary;	// 0x353b20dd
- (id)lastSection;	// 0x352bcc85
- (id)listAt:(int)at;	// 0x353b2871
- (int)listCount;	// 0x353b2895
- (id)listDefinitionAt:(int)at;	// 0x353b28d5
- (int)listDefinitionCount;	// 0x353b28f9
- (id)listDefinitionTable;	// 0x35253af5
- (id)listDefinitionWithId:(int)anId;	// 0x352b63e1
- (id)listTable;	// 0x351c6e31
- (id)mainBlocksIterator;	// 0x353b24ed
- (id)mainRunsIterator;	// 0x353b2469
// converted property getter: - (BOOL)mirrorMargins;	// 0x353b1e21
- (id)newAnnotationBlockIterator;	// 0x353b20f5
- (id)newAnnotationIterator;	// 0x353b2281
- (id)newEndnoteBlockIterator;	// 0x353b2179
- (id)newEndnoteIterator;	// 0x353b2305
- (id)newFootnoteBlockIterator;	// 0x353b21fd
- (id)newFootnoteIterator;	// 0x353b2389
- (id)newMainBlocksIterator;	// 0x353b2491
- (id)newMainRunsIterator;	// 0x353b240d
- (id)newSectionIterator;	// 0x353b2515
// converted property getter: - (id)oleFilename;	// 0x352e8b8d
- (void)removeEmptySections;	// 0x353b2581
- (int)revisionAuthorAddLookup:(id)lookup;	// 0x353b2679
- (id)revisionAuthorAt:(int)at;	// 0x353b269d
- (int)revisionAuthorCount;	// 0x353b26c1
- (id)revisionAuthorTable;	// 0x35254795
- (id)sectionAt:(int)at;	// 0x351c5589
- (int)sectionCount;	// 0x3525bf05
- (id)sectionIterator;	// 0x353b2559
- (id)sections;	// 0x3525c00d
// converted property setter: - (void)setAutoHyphenate:(BOOL)hyphenate;	// 0x3524a27d
// converted property setter: - (void)setBookFold:(BOOL)fold;	// 0x3524a33d
// converted property setter: - (void)setBorderSurroundFooter:(BOOL)footer;	// 0x3524a24d
// converted property setter: - (void)setBorderSurroundHeader:(BOOL)header;	// 0x3524a22d
// converted property setter: - (void)setCreationDate:(id)date;	// 0x353b2615
// converted property setter: - (void)setDefaultTabWidth:(unsigned short)width;	// 0x3524a26d
// converted property setter: - (void)setDocumentBackground:(id)background;	// 0x3525f6ad
// converted property setter: - (void)setEndnoteNumberFormat:(int)format;	// 0x3524a2ed
// converted property setter: - (void)setEndnotePosition:(int)position;	// 0x3524a2cd
// converted property setter: - (void)setEndnoteRestart:(int)restart;	// 0x3524a30d
// converted property setter: - (void)setEvenAndOddHeaders:(BOOL)headers;	// 0x3524a29d
// converted property setter: - (void)setFootnoteNumberFormat:(int)format;	// 0x3524a2dd
// converted property setter: - (void)setFootnoteNumberingStart:(unsigned short)start;	// 0x3524a31d
// converted property setter: - (void)setFootnotePosition:(int)position;	// 0x3524a2bd
// converted property setter: - (void)setFootnoteRestart:(int)restart;	// 0x3524a2fd
// converted property setter: - (void)setGraphicsInHeaderFooter:(BOOL)headerFooter;	// 0x353b1e91
// converted property setter: - (void)setGutterPosition:(int)position;	// 0x3524a32d
// converted property setter: - (void)setMirrorMargins:(BOOL)margins;	// 0x3524a211
// converted property setter: - (void)setOleFilename:(id)filename;	// 0x3524a519
// converted property setter: - (void)setShowComments:(BOOL)comments;	// 0x3524a1f5
// converted property setter: - (void)setShowFormatting:(BOOL)formatting;	// 0x3524a1b9
// converted property setter: - (void)setShowInsertionsAndDeletions:(BOOL)deletions;	// 0x3524a199
// converted property setter: - (void)setShowMarkup:(BOOL)markup;	// 0x3524a1d9
// converted property setter: - (void)setShowOutline:(BOOL)outline;	// 0x3524a36d
// converted property setter: - (void)setShowRevisionMarksOnScreen:(BOOL)screen;	// 0x3524a179
// converted property setter: - (void)setTrackChanges:(BOOL)changes;	// 0x3524a159
// converted property setter: - (void)setVersion:(id)version;	// 0x353b26e1
// converted property setter: - (void)setZIndexTotalForHeaderFooterText:(int)headerFooterText;	// 0x3525f7d9
// converted property setter: - (void)setZIndexTotalForMainText:(int)mainText;	// 0x3525f7b9
// converted property setter: - (void)setZoomPercentage:(short)percentage;	// 0x3524a35d
// converted property getter: - (BOOL)showComments;	// 0x353b1fc5
// converted property getter: - (BOOL)showFormatting;	// 0x353b2035
// converted property getter: - (BOOL)showInsertionsAndDeletions;	// 0x353b2019
// converted property getter: - (BOOL)showMarkup;	// 0x353b1fb1
// converted property getter: - (BOOL)showOutline;	// 0x353b2051
// converted property getter: - (BOOL)showRevisionMarksOnScreen;	// 0x353b1ffd
- (id)styleSheet;	// 0x3524ace9
- (id)theme;	// 0x3525cd01
// converted property getter: - (BOOL)trackChanges;	// 0x353b1fe1
// converted property getter: - (id)version;	// 0x353b1fa1
// converted property getter: - (int)zIndexTotalForHeaderFooterText;	// 0x353b20cd
// converted property getter: - (int)zIndexTotalForMainText;	// 0x353b20bd
// converted property getter: - (short)zoomPercentage;	// 0x353b1f85
@end
