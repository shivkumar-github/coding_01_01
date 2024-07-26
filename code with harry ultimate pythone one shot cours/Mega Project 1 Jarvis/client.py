from openai import OpenAI

client = OpenAI()
# defaults to getting the key using os.environ.get("OPENAI_API_KEY")
# if you saved the key under a different environment variable name, you can do something like:
client = OpenAI(
  api_key= "sk-proj-xaCMxsuyafaf4hdD5N0bT3BlbkFJqZpOmplANde899QA3Dg7"
)

completion = client.chat.completions.create(
        model="gpt-3.5-turbo",
        messages=[
                { "role" : "system", "content" : "You are a virtual assistant named jarvis skilled in general talks like alexa and google cloud"},
                {"role" : "user", "content" : "what is coding"}
                
        ]
)
print(completion.choices[0].message.content)