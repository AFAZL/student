from tkinter import*
root=Tk()
picture=PhotoImage(file=r"C:\Users\KULSUM SIDDIQUIE\Desktop\finalimage.png")
Button(root, text='click me', image=picture).pack(side=TOP)
#root =Tk()
root.geometry('250x300')

b=Button(root,text="Adddd Student",fg="blue")
b.pack()


a=Button(root,text="Remove Student",fg="red")
a.pack()

root.mainloop()