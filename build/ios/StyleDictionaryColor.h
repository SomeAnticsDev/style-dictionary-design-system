
//
// StyleDictionaryColor.h
//
// Do not edit directly
// Generated on Tue, 20 Apr 2021 17:57:22 GMT
//

#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorBaseGrayLight,
ColorBaseGrayMedium,
ColorBaseGrayDark,
ColorBaseRed,
ColorBaseGreen,
ColorBasePurpleLight,
ColorBasePurpleDark,
ColorButtonCta,
ColorButtonDefaultStatic,
ColorButtonDefaultDisabled,
ColorFontBase,
ColorFontSecondary,
ColorFontTertiary
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
