//
//  UILabel.h
//  UIKit
//
//  Created by Shaun Harrison on 6/24/09.
//  Copyright 2009 enormego. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <UIKit/UIView.h>
#import <UIKit/UIColor.h>
#import <UIKit/UIFont.h>

@class UITextField;
@interface UILabel : UIView {
@private
	NSString* text;
	NSFont* font;
	UIColor* textColor;
	UIColor* highlightedTextColor;
	BOOL isHighlighted;
	UIColor* shadowColor;
	NSSize shadowOffset;
	UITextField* _textField;
}

@property(nonatomic,copy) NSString* text;
@property(nonatomic,retain) NSFont* font;
@property(nonatomic,retain) UIColor* textColor;
@property(nonatomic,retain) UIColor* highlightedTextColor;
@property(nonatomic,assign,getter=isHighlighted) BOOL highlighted;
@property(nonatomic,retain) UIColor* shadowColor;
@property(nonatomic,assign) NSSize shadowOffset;

// Only on UIKit-Mac.  Apple's iPhone libary does not have this.
@property(nonatomic,assign,getter=isSelectable) BOOL selectable;
@end
