/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MZEffectTiming.h"
#import "MREffect.h"

@class MRImage, NSMutableDictionary, NSMutableArray, MRImageProvider, NSDictionary, MRCroppingSprite, NSArray;

@interface MREffectDateline : MREffect <MZEffectTiming> {
	NSMutableDictionary *mSprites;	// 116 = 0x74
	NSDictionary *mJournal;	// 120 = 0x78
	NSMutableArray *mLengths;	// 124 = 0x7c
	NSMutableArray *mChapterDurations;	// 128 = 0x80
	NSMutableArray *mChapters;	// 132 = 0x84
	NSMutableDictionary *mText;	// 136 = 0x88
	NSMutableDictionary *mChapterDates;	// 140 = 0x8c
	NSMutableDictionary *mChapterNumDate;	// 144 = 0x90
	NSMutableArray *mIndicies;	// 148 = 0x94
	NSMutableDictionary *mWeatherImages;	// 152 = 0x98
	NSMutableDictionary *mDayImages;	// 156 = 0x9c
	NSMutableDictionary *mBreakInformation;	// 160 = 0xa0
	NSMutableDictionary *mMovieProviders;	// 164 = 0xa4
	NSArray *mSlideInformation;	// 168 = 0xa8
	BOOL mIsLoaded;	// 172 = 0xac
	BOOL mIsRotating;	// 173 = 0xad
	BOOL mIsVertical;	// 174 = 0xae
	MRImageProvider *mTextBackground;	// 176 = 0xb0
	MRImageProvider *mQuoteOpen;	// 180 = 0xb4
	MRImageProvider *mQuoteClose;	// 184 = 0xb8
	MRImageProvider *mQuoteBox;	// 188 = 0xbc
	MRImageProvider *mWeatherWindowMask;	// 192 = 0xc0
	MRImageProvider *mDateWindowMask;	// 196 = 0xc4
	MRImage *mGrayImage;	// 200 = 0xc8
	MRCroppingSprite *mChapterSprite;	// 204 = 0xcc
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x33af42a1
+ (BOOL)hasCustomTiming;	// 0x33af429d
+ (void)initialize;	// 0x33af3361
- (id)initWithEffectID:(id)effectID;	// 0x33af340d
- (void)_addTextImage:(id)image forKey:(id)key inDictionary:(id)dictionary;	// 0x33b016b5
- (float)_aspectRatioForSlideIndex:(int)slideIndex;	// 0x33af6365
- (void)_calculateDurations:(id)durations slideInformation:(id)information aspectRatio:(float)ratio;	// 0x33af5ddd
- (double)_calculateMainDurationWithAttributes:(id)attributes;	// 0x33af4671
- (int)_chapterIndexForTime:(double)time;	// 0x33af8179
- (NSRange)_chapterRangeForSlide:(int)slide startIndex:(int *)index endIndex:(int *)index3;	// 0x33af5c9d
- (void)_cleanUpDictionary:(id)dictionary;	// 0x33b00e99
- (void)_cleanup;	// 0x33af3919
- (int)_currentItemForChapter:(int)chapter atTime:(double)time forDuration:(double *)duration fromTime:(double *)time4;	// 0x33af8671
- (void)_drawChapterDateSwitch:(int)aSwitch to:(int)to progress:(float)progress time:(double)time arguments:(id)arguments context:(id)context;	// 0x33affd31
- (void)_drawGrayChapters:(id)chapters time:(double)time arguments:(id)arguments showInfo:(BOOL)info startProgress:(float)progress titleEnd:(float)end titleToChapter:(float)chapter drawPhotos:(BOOL)photos startIndex:(int)index exit:(float)exit isExiting:(BOOL)exiting chapterIntro:(float)intro chapterProgress:(float)progress13;	// 0x33afb9d9
- (BOOL)_isMovieForSlideAtIndex:(int)index;	// 0x33af6225
- (void)_loadDateForChapter:(int)chapter context:(id)context;	// 0x33b025b9
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33b0303d
- (void)_loadTextForChapter:(int)chapter context:(id)context;	// 0x33b01c71
- (int)_maxLinesForTextElement:(id)textElement;	// 0x33b03741
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x33b03719
- (double)_movieDurationForSlideAtIndex:(int)index;	// 0x33af62c5
- (float)_offsetForChapterIndex:(int)chapterIndex layoutIndex:(int)index aspectRatio:(float)ratio;	// 0x33af7fcd
- (CGSize)_sizeForBreakAspectRatio:(float)breakAspectRatio size:(CGSize)size inContext:(id)context;	// 0x33af5b21
- (float)_startTimeForChapter:(int)chapter;	// 0x33af82a9
- (double)_startTimeForSlideIndex:(int)slideIndex inChapter:(int)chapter;	// 0x33af83a1
- (id)_textImageForString:(id)string string2:(id)a2 type:(int)type inContext:(id)context firstLine:(CGRect *)line lastLine:(CGRect *)line6;	// 0x33b01029
- (id)_textImageForString:(id)string type:(int)type inContext:(id)context;	// 0x33b00ff9
- (BOOL)_timeIs24HourFormat;	// 0x33b02ee9
- (void)_unload;	// 0x33b03745
- (void)_unloadTextForChapter:(int)chapter;	// 0x33b01b0d
- (void)_updateIndiciesWithAttributes:(id)attributes;	// 0x33af43a1
- (void)_updateSlideProviders:(float)providers context:(id)context renderArguments:(id)arguments;	// 0x33af5081
- (id)_weatherStringForCondition:(int)condition;	// 0x33af7ed5
- (void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;	// 0x33b016fd
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x33af4ac1
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x33af4cc1
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33b00d05
- (void)endMorphing;	// 0x33b0190d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33b00e51
- (BOOL)isLoadedForTime:(double)time;	// 0x33af4cd9
- (double)lowestDisplayTime;	// 0x33af4aa9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33af6439
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33af8959
- (void)setAttributes:(id)attributes;	// 0x33af4fe5
- (void)setPixelSize:(CGSize)size;	// 0x33af3f79
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x33af4899
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x33af4789
@end

